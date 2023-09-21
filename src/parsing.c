/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeerber <mmeerber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:23:28 by mmeerber          #+#    #+#             */
/*   Updated: 2023/09/21 14:58:50 by mmeerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int check_number(char *value)
{
	int x;

	if (value[0] == '-' || value[0] == '+')
		x = 1;
	else
		x = 0;
	while (value[x])
	{
		if (value[x] > 57)
			return (0);
		else if (value[x] < 48)
			return (0);
		x++;
	}
	return (1);
}

static char	*verif_number(char **tab)
{
	size_t x;
	size_t y;
	int verif;
	
	x = 0;
	while (tab[x])
	{
		y = 0;
		while (y < ft_strlen(tab[x]))
		{
			verif = check_number(tab[x]);
			if (verif == 0)
				return (NULL);
			y++;
		}
		x++;
	}
	return ("parsing end");
}

static void	verif_double(char **tab)
{
	int size_tab;
	int	x;
	int y;
	int res;

	size_tab = 0;
	x = 0;
	res = 0;
	y = 0;
	int temp = res + y;
	y = temp;
	while (tab[size_tab])
		size_tab++;
	ft_printf("size tab %d\n", size_tab);
	while (tab[x])
	{
		
		x++;
	}
	return ;
}
char **parsing(char *string)
{
	char	**tab;
	char	*res;

	tab = ft_split(string, ' ');
	if (!tab)
		return (NULL);
	res = verif_number(tab);
	if (!res)
		return (NULL);
	verif_double(tab);
	return (tab);
}
