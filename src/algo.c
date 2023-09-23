/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeerber <mmeerber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:46:44 by mmeerber          #+#    #+#             */
/*   Updated: 2023/09/21 11:12:55 by mmeerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void algo(Pile a)
{
	set_size_pile(a);
	ft_print_pile(a);
	sa(a);
	ft_printf("---");
	ft_print_pile(a);
	return ;
}
