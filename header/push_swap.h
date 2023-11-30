/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeerber <mmeerber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 22:36:53 by mmeerber          #+#    #+#             */
/*   Updated: 2023/11/28 19:00:03 by mmeerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft_and_more/libft_and_more.h"

# define INT_MAX 2147483647
# define INT_MIN -2147483648

int		parsing(char **av, int ac);
int		check_pile_sorted(t_list *pile_a);
void	set_occ(t_list	**pile_a);
void	algo(t_list **pile_a, t_list **pile_b);
void	swap(t_list **pile);
void	sa(t_list **pile);
void	sb(t_list **pile);
void	radix(t_list **pile_a, t_list **pile_b);
void	push(t_list **pile_start, t_list **pile_end);
void	pa(t_list **pile_start, t_list **pile_end);
void	pb(t_list **pile_start, t_list **pile_end);
void	print_pile_(t_list *pile);
void	rotate(t_list **pile);
void	reverse_rotate(t_list **pile);
void	double_free(char **tab);
void	free_pile(t_list *pile);
void	simple_sort(t_list **pile_a, t_list **pile_b);
void	check_atoi(char **tab, int ac);
void	sort_5(t_list **pile_a, t_list **pile_b, int x);
void	sort_4(t_list **pile_a, t_list **pile_b, int x);
void	sort_3(t_list **pile_a, int x);
void	simple_sort_5(t_list **pile_a, t_list **pile_b);

#endif
