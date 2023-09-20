/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeerber <mmeerber@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:20:15 by mmeerber          #+#    #+#             */
/*   Updated: 2023/09/20 11:59:33 by mmeerber         ###   ########.fr       */
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
}Pile;

char	**parsing(char *string);
int		*convert(char **tab);
void	algo(struct Pile a);
void	sa(struct Pile a);

#endif
