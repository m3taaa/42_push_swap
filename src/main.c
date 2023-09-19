/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeerber <mmeerber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:59:04 by mmeerber          #+#    #+#             */
/*   Updated: 2023/09/19 12:09:01 by mmeerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	char **tab;
	int	size_input;

	if (ac != 2)
		return (0);
	else
	{
		ft_printf("Start prog : %s\n", av[0]);
		size_input = ft_strlen(av[1]);
		if (size_input == 0 || size_input == 1)
		{
			ft_printf("trop court\n");
			return (0);
		}
		tab = parsing(av[1]);
		if (!tab)
		{
			ft_printf("Only number !\n");
			return (0);
		}
	}
	return (0);
}
