/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeerber <mmeerber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:23:28 by mmeerber          #+#    #+#             */
/*   Updated: 2023/09/19 11:46:27 by mmeerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int check_number(char *value)
{
	int x;

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

static char	*verif(char **tab)
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
	return ("finish");
}

char **parsing(char *string)
{
	char	**tab;
	char	*res;

	tab = ft_split(string, ' ');
	if (!tab)
		return (NULL);
	res = verif(tab);
	if (!res)
		return (NULL);
	printf("%s\n", res);
	return (tab);
}
