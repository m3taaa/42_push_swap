/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeerber <mmeerber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:23:28 by mmeerber          #+#    #+#             */
/*   Updated: 2023/09/28 18:30:44 by mmeerber         ###   ########.fr       */
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
	//char *temp;
	int x;

	x = 0;
	while(tab[x])
	{
		ft_printf("tab[%d] = %s\n", x, tab[x]);
		x++;
	}
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
	//print_tab(tab);
	return (tab);
}
