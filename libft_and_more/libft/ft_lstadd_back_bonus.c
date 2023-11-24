#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *temp1)
{
	t_list	*temp;

	if (!lst)
		return ;
	temp = *lst;
	if (!(*lst))
	{
		temp = temp1;
		return ;
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = temp1;
	temp1->next = NULL;
	return ;
}
