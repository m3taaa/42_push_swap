#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *temp1)
{
	if (!temp1)
		return ;
	if (lst)
		temp1->next = *lst;
	*lst = temp1;
	return ;
}
