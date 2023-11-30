/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeerber <mmeerber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:51:15 by mmeerber          #+#    #+#             */
/*   Updated: 2023/11/28 19:02:26 by mmeerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void	simple_sort_5(t_list **pile_a, t_list **pile_b)
{
	sort_5(pile_a, pile_b, 0);
	if (1 == check_pile_sorted(*pile_a))
	{
		pa(pile_b, pile_a);
		return ;
	}
	sort_4(pile_a, pile_b, 1);
	if (1 == check_pile_sorted(*pile_a))
	{
		pa(pile_b, pile_a);
		pa(pile_b, pile_a);
		return ;
	}
	sort_3(pile_a, 2);
}
