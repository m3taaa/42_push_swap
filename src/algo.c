/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeerber <mmeerber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:46:44 by mmeerber          #+#    #+#             */
/*   Updated: 2023/09/25 15:19:21 by mmeerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_b(Pile b, int size)
{
	b.tab = malloc(sizeof(int) * size);
	if (!b.tab)
		ft_error();
	set_size_pile(b);
}

void algo(Pile a)
{
	Pile b;

	init_b(b, a.size);
	pa(a, b);
	return ;
}
