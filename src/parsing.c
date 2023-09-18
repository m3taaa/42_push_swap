/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeerber <mmeerber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:23:28 by mmeerber          #+#    #+#             */
/*   Updated: 2023/09/18 14:26:03 by mmeerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_number(char *value)
{
	int x;

	x = 0;
	while (value[x])
	{
		if (value[x] <= 47 && value[x] >= 58)
			return (0);
		x++;
	}
	return (1);
}

char	*verif(char **tab)
{
	size_t x;
	size_t y;
	
	x = 0;
	while (tab[x])
	{
		y = 0;
		while (y < ft_strlen(tab[x]))
		{
			int verif = check_number(tab[x]);
			printf("verif : %d\n", verif);
			y++;
		}
		printf("\n");
		x++;
	}
	return ("finish");
}

void	parsing(char *string)
{
	//int size_string;
	char	**tab;

	//size_string = ft_strlen(string);
	tab = ft_split(string, ' ');
	if (!tab)
		return ;
	char *test = verif(tab);
	printf("parsing %s\n", test);
	//printf("Len s	tring = %d\n", size_string);
	
}
