/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeerber <mmeerber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:59:04 by mmeerber          #+#    #+#             */
/*   Updated: 2023/09/20 15:36:32 by mmeerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	char **tab;
	int	size_input;
	Pile pile_a;

	if (ac != 2)
		ft_error();
	size_input = ft_strlen(av[1]);
	if (size_input == 0 || size_input == 1)
		ft_error();
	tab = parsing(av[1]);
	if (!tab)
	{
		fre_tab(tab);
		ft_error();
	}
	pile_a.tab = convert(tab);
	if (!pile_a.tab)
	{
		free_tab(tab);
		free(pile_a.tab);
		ft_error();
	}
	algo(pile_a);
	return (0);
}
