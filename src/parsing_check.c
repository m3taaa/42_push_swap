/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeerber <mmeerber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:25:16 by mmeerber          #+#    #+#             */
/*   Updated: 2023/12/04 10:36:30 by mmeerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void	check_atoi(char **tab, int ac)
{
	int		x;
	long	number;

	x = 0;
	while (tab[x])
	{
		number = ft_atoi(tab[x]);
		if (number == 2147483648)
		{
			if (ac == 2)
				double_free(tab);
			write(STDERR_FILENO, "Error\n", 6);
			exit (1);
		}
		x++;
	}
}
