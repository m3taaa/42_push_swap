#include "../header/push_swap.h"

void	push(t_list **pile_start, t_list **pile_end)
{
	t_list	*temp;

	if (pile_start == NULL)
		return ;
	temp = *pile_start;
	*pile_start = (*pile_start)->next;
	temp->next = NULL;
	if (*pile_end == NULL)
		*pile_end = temp;
	else
		ft_lstadd_front(pile_end, temp);
	return ;
}

void	pb(t_list	**pile_start, t_list	**pile_end)
{
	push(pile_start, pile_end);
	ft_printf("pb\n");
}

void	pa(t_list	**pile_start, t_list	**pile_end)
{
	push(pile_start, pile_end);
	ft_printf("pa\n");
}
