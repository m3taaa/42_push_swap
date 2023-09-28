/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeerber <mmeerber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:59:04 by mmeerber          #+#    #+#             */
/*   Updated: 2023/09/26 19:39:11 by mmeerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	char **tab;
	int	size_input;

	if (ac != 2)
		ft_error();
	size_input = ft_strlen(av[1]);
	if (size_input == 0 || size_input == 1)
		ft_error();
	tab = parsing(av[1]);
	if (!tab)
	{
		free_tab(tab);
		ft_error();
	}
	convert(tab);
	return (0);
}
