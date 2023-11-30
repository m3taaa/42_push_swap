/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeerber <mmeerber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 08:00:52 by mmeerber          #+#    #+#             */
/*   Updated: 2023/11/30 13:27:01 by mmeerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static	t_list	*init_pile(char **av, int ac)
{
	t_list	*pile_a;
	t_list	*temp;
	char	**tab;
	int		x;

	x = 1;
	if (ac == 2)
		tab = ft_split(av[1], ' ');
	else
		tab = &av[1];
	pile_a = ft_lstnew(ft_atoi(tab[0]));
	pile_a->occ = -1;
	while (tab[x] != NULL)
	{
		temp = ft_lstnew(ft_atoi(tab[x]));
		temp->occ = -1;
		ft_lstadd_back(&pile_a, temp);
		x++;
	}
	if (ac == 2)
		double_free(tab);
	return (pile_a);
}

int	main(int ac, char **av)
{
	t_list	*pile_a;
	t_list	*pile_b;
	int		parsing_value;

	if (ac >= 2)
	{
		parsing_value = parsing(av, ac);
		if (parsing_value == 1)
		{
			write(STDERR_FILENO, "Error\n", 6);
			return (0);
		}
		pile_b = NULL;
		pile_a = init_pile(av, ac);
		set_occ(&pile_a);
		algo(&pile_a, &pile_b);
		free_pile(pile_a);
		free_pile(pile_b);
	}
	if (ac < 2)
		return (0);
	return (0);
}
