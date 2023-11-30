/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeerber <mmeerber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 08:01:13 by mmeerber          #+#    #+#             */
/*   Updated: 2023/11/28 17:19:42 by mmeerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

int	check_pile_sorted(t_list	*temp)
{
	int		x;
	int		size;

	x = 0;
	size = ft_lstsize(temp);
	while (temp->next)
	{
		if (temp->occ < temp->next->occ)
			x++;
		temp = temp->next;
	}
	if (x == (size - 1))
	{
		return (1);
	}
	return (0);
}

void	algo(t_list **pile_a, t_list **pile_b)
{
	int		size_pile;

	size_pile = ft_lstsize(*pile_a);
	if (check_pile_sorted(*pile_a) == 1)
	{
		free_pile(*pile_a);
		free_pile(*pile_b);
		exit (1);
	}
	if (size_pile == 2)
		sa(pile_a);
	else if (size_pile > 5)
		radix(pile_a, pile_b);
	else
		simple_sort(pile_a, pile_b);
	return ;
}
