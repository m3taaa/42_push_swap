/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeerber <mmeerber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:46:44 by mmeerber          #+#    #+#             */
/*   Updated: 2023/09/19 19:31:11 by mmeerber         ###   ########.fr       */
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
		printf("%d\n", a.tab[x]);
		x++;
	}
	return ;
}
