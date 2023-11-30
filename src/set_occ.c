/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_occ.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeerber <mmeerber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 08:02:06 by mmeerber          #+#    #+#             */
/*   Updated: 2023/11/28 11:10:31 by mmeerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static	int	find_max(t_list	*pile_a)
{
	int	max;

	max = pile_a->content;
	pile_a = pile_a->next;
	while (pile_a)
	{
		if (pile_a->content > max)
			max = pile_a->content;
		pile_a = pile_a->next;
	}
	return (max);
}

static int	find_min(t_list	*pile_a)
{
	int	min;

	min = pile_a->content;
	pile_a = pile_a->next;
	while (pile_a)
	{
		if (pile_a->content < min)
			min = pile_a->content;
		pile_a = pile_a->next;
	}
	return (min);
}

static void	set_max_min_pile(t_list *pile_a, int max, int min)
{
	int	size_pile;

	size_pile = ft_lstsize(pile_a);
	while (pile_a)
	{
		if (pile_a->content == max)
			pile_a->occ = size_pile - 1;
		if (pile_a->content == min)
			pile_a->occ = 0;
		pile_a = pile_a->next;
	}
	return ;
}

static void	set_all_pile(t_list *pile, int tab_for_int[2], t_list *head)
{
	while (tab_for_int[0] < (ft_lstsize(pile) - 1))
	{
		while (pile && pile->occ != -1)
			pile = pile->next;
		if (!pile)
			return ;
		tab_for_int[1] = pile->content;
		pile = head;
		while (pile)
		{
			if (pile->occ == -1 && pile->content < tab_for_int[1])
				tab_for_int[1] = pile->content;
			pile = pile->next;
		}
		pile = head;
		while (pile)
		{
			if (pile->content == tab_for_int[1])
				pile->occ = tab_for_int[0];
			pile = pile->next;
		}
		pile = head;
		tab_for_int[0]++;
	}
}

/*
 * tab[0] == x
 * tab[1] == min_temp
 *
 * */

void	set_occ(t_list	**pile_a)
{
	int		max;
	int		min;
	int		tab_for_int[2];
	t_list	*head;

	tab_for_int[0] = 1;
	max = find_max(*pile_a);
	min = find_min(*pile_a);
	set_max_min_pile(*pile_a, max, min);
	head = *pile_a;
	set_all_pile(*pile_a, tab_for_int, head);
	return ;
}
