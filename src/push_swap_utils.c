/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeerber <mmeerber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:19:44 by mmeerber          #+#    #+#             */
/*   Updated: 2023/09/20 15:33:37 by mmeerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_error()
{
	write(STDERR_FILENO, "Error\n", 6);
	exit(1);
}

void	free_tab(char **tab)
{
	int x;

	x = 0;
	while (tab[x])
	{
		free(tab[x]);
		x++;
	}
	free(tab);
}

void	ft_print_pile(Pile pile)
{
	int x;

	x = 0;
	while (pile.tab[x])
	{
		ft_printf("%d\n", pile.tab[x]);
		x++;
	}
	return ;
}

void	set_size_pile(Pile a)
{
	int x;

	x = 0;
	while (a.tab[x])
		x++;
	a.size = x;
	return ;
}
