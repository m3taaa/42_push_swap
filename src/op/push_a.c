/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeerber <mmeerber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:41:36 by mmeerber          #+#    #+#             */
/*   Updated: 2023/09/25 15:19:07 by mmeerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(Pile a, Pile b)
{
	int temp;
	Pile pile_temp;

	if (!b.tab[0])
		return ;
	temp = b.tab[0];
	pile_temp.tab = malloc(sizeof(int) * a.size);
	copy_pile(pile_temp, a);
	ft_print_pile(pile_temp);
	return ;
}
