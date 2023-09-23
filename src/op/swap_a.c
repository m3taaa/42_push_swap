/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeerber <mmeerber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:43:14 by mmeerber          #+#    #+#             */
/*   Updated: 2023/09/20 23:07:09 by mmeerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(Pile a)
{
	int temp;

	if (!a.tab[0] || !a.tab[1])
		return ;
	temp = a.tab[0];
	a.tab[0] = a.tab[1];
	a.tab[1] = temp;
	//ft_printf("%d\n", a.tab[0]);
	return ;
}
