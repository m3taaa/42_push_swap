/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeerber <mmeerber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 08:02:31 by mmeerber          #+#    #+#             */
/*   Updated: 2023/11/27 12:57:32 by mmeerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void	double_free(char **tab)
{
	int	x;

	x = 0;
	while (tab[x])
	{
		free(tab[x]);
		x++;
	}
	free(tab);
	return ;
}

void	free_pile(t_list *pile)
{
	t_list	*tmp;

	while (pile)
	{
		tmp = pile->next;
		free(pile);
		pile = tmp;
	}
	free(pile);
	return ;
}
