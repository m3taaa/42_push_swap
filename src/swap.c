/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeerber <mmeerber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 08:02:19 by mmeerber          #+#    #+#             */
/*   Updated: 2023/11/28 18:43:24 by mmeerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void	swap(t_list **pile)
{
	int		content;
	int		occ;
	t_list	*temp;
	t_list	*head;

	if (pile == NULL || (*pile)->next == NULL)
		return ;
	head = *pile;
	temp = (*pile)->next;
	content = head->content;
	occ = head->occ;
	head->content = temp->content;
	head->occ = temp->occ;
	temp->content = content;
	temp->occ = occ;
}

void	sa(t_list	**pile)
{
	swap(pile);
	ft_printf("sa\n");
	return ;
}

void	sb(t_list	**pile)
{
	swap(pile);
	ft_printf("sb\n");
	return ;
}
