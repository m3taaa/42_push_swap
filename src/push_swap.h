/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeerber <mmeerber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:20:15 by mmeerber          #+#    #+#             */
/*   Updated: 2023/09/25 15:13:41 by mmeerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"

typedef struct Pile 
{
	int *tab;
	int size;
}Pile;

char	**parsing(char *string);
int		*convert(char **tab);
void	algo(struct Pile a);
void	sa(struct Pile a);
void	sb(struct Pile b);
void	ss(struct Pile a, struct Pile b);
void	pa(struct Pile a, struct Pile b);
void	pb(struct Pile a, struct Pile b);
void	ra(struct Pile a);
void	rb(struct Pile b);
void	rr(struct Pile a, struct Pile b);
void 	rra(struct Pile a);
void	rrb(struct Pile b);
void 	rrr(struct Pile a, struct Pile b);
void	ft_error();
void	free_tab(char **tab);
void    ft_print_pile(Pile pile);
void    set_size_pile(Pile a);
void    copy_pile(Pile a, Pile b);

#endif
