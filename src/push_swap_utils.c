/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeerber <mmeerber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:19:44 by mmeerber          #+#    #+#             */
/*   Updated: 2023/09/28 14:40:09 by mmeerber         ###   ########.fr       */
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

void	print_tab(char **tab)
{
	int x;

	x = 0;
	while(tab[x])
	{
		ft_printf("tab-> %s\n", tab[x]);
		x++;
	}
}
