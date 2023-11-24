#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft_and_more/libft_and_more.h"

int	parsing(char *argument);
void	set_occ(t_list	**pile_a);
void	algo(t_list		**pile_a, t_list	**pile_b);
void	swap(t_list		**pile);
void	sa(t_list	**pile);
void	sb(t_list	**pile);
void	radix(t_list	**pile_a, t_list	**pile_b);
void    push(t_list **pile_start, t_list **pile_end);
void	pa(t_list	**pile_start, t_list	**pile_end);
void	pb(t_list	**pile_start, t_list	**pile_end);
void    print_pile_(t_list *pile);
void	rotate(t_list	**pile);
void    reverse_rotate(t_list   **pile);

#endif
