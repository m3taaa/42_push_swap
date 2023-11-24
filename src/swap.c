#include "../header/push_swap.h"

void	swap(t_list **pile)
{
	int temp;

	if (pile == NULL || (*pile)->next == NULL)
		return ;
	temp = (*pile)->content;
	(*pile)->content = (*pile)->next->content;
	(*pile)->next->content = temp;
}

void	sa(t_list	**pile)
{
	swap(pile);
	ft_printf("sa\n");
	return ;
}

void	sb(t_list	**pile)
{
	swap(pile);
	ft_printf("sb\n");
	return ;
}
