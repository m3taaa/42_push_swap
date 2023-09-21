/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeerber <mmeerber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:46:44 by mmeerber          #+#    #+#             */
/*   Updated: 2023/09/21 11:12:55 by mmeerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void algo(Pile a)
{
	int x;
	Pile b;

	x = 0;
	while (a.tab[x])
	{
		x++;
	}
	b.tab = malloc(sizeof(int) * x);
	b.tab = a.tab;
	x = 0;
	while (b.tab[x])
	{
		x++;
	}
	return ;
}
