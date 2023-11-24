#include "../header/push_swap.h"

void	rotate(t_list **pile)
{
	t_list	*start;
	t_list	*end;

	if (ft_lstsize(*pile) < 2)
		return ;
	start = *pile;
	end = ft_lstlast(start);
	*pile = start->next;
	start->next = NULL;
	end->next = start;
	ft_printf("ra\n");
	return ;
}

void	reverse_rotate(t_list	**pile)
{
	t_list	*start;
	t_list	*end;
	 
	if (ft_lstsize(*pile) < 2)
		return ;
	start = *pile;
	end = ft_lstlast(*pile);
	while (start)
	{
		if (start->next->next == NULL)
		{
			start->next = NULL;
			break;
		}
		start = start->next;
	}
	end->next = *pile;
	*pile = end;
	ft_printf("rra\n");
	return ;
}
