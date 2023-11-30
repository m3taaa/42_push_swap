/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeerber <mmeerber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 08:01:31 by mmeerber          #+#    #+#             */
/*   Updated: 2023/11/30 17:43:33 by mmeerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"
#include <stdlib.h>

static int	check_number(char **tab)
{
	size_t	x;
	size_t	y;

	x = 0;
	while (tab[x])
	{
		if (tab[x][0] == '-' || tab[x][0] == '+')
			y = 1;
		else
			y = 0;
		while (y < ft_strlen(tab[x]))
		{
			if (!ft_isdigit(tab[x][y]))
				return (1);
			y++;
		}
		x++;
	}
	return (0);
}

static int	check_double_comp(int *tab_int, int x)
{
	int		y;
	int		z;

	y = 0;
	while (y < x)
	{
		z = 0;
		while (z < x)
		{
			if (tab_int[y] == tab_int[z] && z != y)
			{
				free(tab_int);
				return (1);
			}
			z++;
		}
		y++;
	}
	free(tab_int);
	return (0);
}

static int	check_double(char **tab)
{
	int		x;
	int		y;
	int		return_comp;
	int		*tab_int;

	x = 0;
	while (tab[x])
		x++;
	tab_int = malloc(sizeof(int) * x);
	if (!tab_int)
		return (1);
	y = 0;
	while (tab[y])
	{
		tab_int[y] = ft_atoi(tab[y]);
		y++;
	}
	return_comp = check_double_comp(tab_int, x);
	if (return_comp == 1)
		return (1);
	return (0);
}

static int	check_size_number(char **argument, int ac)
{
	int		x;
	int		verif_number;

	x = 0;
	verif_number = check_number(argument);
	if (verif_number == 1)
	{
		if (ac == 2)
			double_free(argument);
		write(STDERR_FILENO, "Error\n", 6);
		exit (1);
	}
	check_atoi(argument, ac);
	while (argument[x])
		x++;
	if (x <= 1)
	{
		if (ac == 2)
			double_free(argument);
		exit(1);
	}
	return (0);
}

int	parsing(char **av, int ac)
{
	char	**tab;
	int		verification_double;

	if (ac == 2)
		tab = ft_split(av[1], ' ');
	else
		tab = &av[1];
	if (!tab || tab == NULL)
		return (1);
	check_size_number(tab, ac);
	verification_double = check_double(tab);
	if (verification_double == 1)
	{
		if (ac == 2)
			double_free(tab);
		return (1);
	}
	if (ac == 2)
		double_free(tab);
	return (0);
}
