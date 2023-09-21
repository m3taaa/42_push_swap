/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_to_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeerber <mmeerber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:20:20 by mmeerber          #+#    #+#             */
/*   Updated: 2023/09/21 10:08:02 by mmeerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *convert(char **tab)
{
	int x;
	//int nb;
	int *pile_a;

	x = 0;
	while(tab[x])
	{
		x++;
	}
	pile_a = malloc(sizeof(int) * x);
	if (!pile_a)
		return (NULL);
	x = 0;
	while (tab[x])
	{
		pile_a[x] = ft_atoi(tab[x]);
		x++;
	}
	return (pile_a);
}
