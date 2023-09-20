/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeerber <mmeerber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:59:04 by mmeerber          #+#    #+#             */
/*   Updated: 2023/09/20 10:08:50 by mmeerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	char **tab;
	int	size_input;
	Pile pile_a;

	if (ac != 2)
		return (0);
	else
	{
		size_input = ft_strlen(av[1]);
		if (size_input == 0 || size_input == 1)
		{
			write(STDERR_FILENO, "Error\n", 6);
			exit(1);
		}
		tab = parsing(av[1]);
		if (!tab)
		{
			write(STDERR_FILENO, "Error\n", 6);
			exit(1);
		}
		pile_a.tab = convert(tab);
		if (!pile_a.tab)
			exit(1);
		algo(pile_a);
	}
	return (0);
}
