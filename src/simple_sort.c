/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeerber <mmeerber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:58:02 by mmeerber          #+#    #+#             */
/*   Updated: 2023/11/28 19:00:28 by mmeerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void	sort_3(t_list	**pile_a, int x)
{
	t_list	*tmp;

	tmp = *pile_a;
	if (tmp->occ == (0 + x))
	{
		reverse_rotate(pile_a);
		sa(pile_a);
	}
	else if (tmp->occ == (1 + x) && tmp->next->occ == (2 + x))
		reverse_rotate(pile_a);
	else if (tmp->occ == (1 + x) && tmp->next->occ == (0 + x))
		sa(pile_a);
	else if (tmp->occ == (2 + x) && tmp->next->occ == (1 + x))
	{
		rotate(pile_a);
		sa(pile_a);
	}
	else if (tmp->occ == (2 + x) && tmp->next->occ == (0 + x))
		rotate(pile_a);
	return ;
}

void	sort_4(t_list **pile_a, t_list **pile_b, int x)
{
	if ((*pile_a)->occ == x)
		pb(pile_a, pile_b);
	else if ((*pile_a)->next->occ == x)
	{
		sa(pile_a);
		pb(pile_a, pile_b);
	}
	else if ((*pile_a)->next->next->occ == x)
	{
		rotate(pile_a);
		sa(pile_a);
		pb(pile_a, pile_b);
	}
	else
	{
		reverse_rotate(pile_a);
		pb(pile_a, pile_b);
	}
}

void	sort_5(t_list **pile_a, t_list **pile_b, int x)
{
	if ((*pile_a)->occ == x)
		pb(pile_a, pile_b);
	else if ((*pile_a)->next->occ == x)
	{
		sa(pile_a);
		pb(pile_a, pile_b);
	}
	else if ((*pile_a)->next->next->occ == x)
	{
		rotate(pile_a);
		sa(pile_a);
		pb(pile_a, pile_b);
	}
	else if ((*pile_a)->next->next->next->occ == x)
	{
		reverse_rotate(pile_a);
		reverse_rotate(pile_a);
		pb(pile_a, pile_b);
	}
	else
	{
		reverse_rotate(pile_a);
		pb(pile_a, pile_b);
	}
}

void	simple_sort(t_list **pile_a, t_list **pile_b)
{
	int	size;

	size = ft_lstsize(*pile_a);
	if (size == 3)
		sort_3(pile_a, 0);
	else if (size == 4)
	{
		sort_4(pile_a, pile_b, 0);
		if (1 == check_pile_sorted(*pile_a))
		{
			pa(pile_b, pile_a);
			return ;
		}
		sort_3(pile_a, 1);
	}
	else if (size == 5)
		simple_sort_5(pile_a, pile_b);
	while (ft_lstsize(*pile_b) != 0)
		pa(pile_b, pile_a);
}
