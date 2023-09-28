/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_to_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeerber <mmeerber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:20:20 by mmeerber          #+#    #+#             */
/*   Updated: 2023/09/26 19:53:15 by mmeerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *convert(char **tab)
{
	t_pile *a;
	t_pile *temp;
	int x;
	//int nb;

	x = 0;
	while(tab[x])
	{
		x++;
	}
	x = 0;
	while (tab[x])
	{
		temp = lst_new(ft_atoi(tab[x])); //A coder
		lst_back(&a, temp);
		x++;
	}
	return (pile_a);
}
