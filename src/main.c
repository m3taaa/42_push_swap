/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeerber <mmeerber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:59:04 by mmeerber          #+#    #+#             */
/*   Updated: 2023/09/19 11:48:27 by mmeerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int main(int ac, char **av)
{
	char **tab;

	if (ac != 2)
		return (0);
	else
	{
		printf("Start prog : %s\n", av[0]);
		tab = parsing(av[1]);
		if (!tab)
			printf("Only number !");
		else
			printf("Ok");
	}
	return (0);
}
