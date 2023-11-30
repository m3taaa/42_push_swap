/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeerber <mmeerber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 08:05:37 by mmeerber          #+#    #+#             */
/*   Updated: 2023/11/26 08:05:39 by mmeerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *temp1)
{
	t_list	*temp;

	if (!lst)
		return ;
	temp = *lst;
	if (!(*lst))
	{
		temp = temp1;
		return ;
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = temp1;
	temp1->next = NULL;
	return ;
}
