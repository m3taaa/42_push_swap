#include "../header/push_swap.h"

static void	tree_number(t_list	**pile_a)
{
	t_list	*tmp;

	tmp = *pile_a;
	if (tmp->occ == 0)
	{
		reverse_rotate(pile_a);
		sa(pile_a);
	}
	else if (tmp->occ == 1 && tmp->next->occ == 2)
		reverse_rotate(pile_a);
	else if (tmp->occ == 1 && tmp->next->occ == 0)
		sa(pile_a);
	else if (tmp->occ == 2 && tmp->next->occ == 1)
	{
		rotate(pile_a);
		sa(pile_a);
	}
	else if (tmp->occ == 2 && tmp->next->occ == 0)
		rotate(pile_a);
	return ;
}

static void	middle_tri(t_list	**pile_a, t_list	**pile_b)
{
	int 	min;
	int		size;
	t_list	*temp;

	min = 0;
	size = ft_lstsize(*pile_a);
	temp = *pile_a;
	while (min < size)
	{
		if (temp->occ == min)
		{
			pb(pile_a, pile_b);
			min++;
		}
		else
			rotate(pile_a);
		temp = *pile_a;
	}
	while (ft_lstsize(*pile_b) != 0)
		pa(pile_b, pile_a);
	return ;
}

static int	check_pile_sorted(t_list	**pile_a)
{
	int 	x;
	t_list	*temp;

	x = 0;
	temp = *pile_a;
	while (temp)
	{
		if (temp->occ == x)
			x++;
		temp = temp->next;
	}
	if (x == ft_lstsize(*pile_a))
		return (1);
	return (0);
}

void	algo(t_list **pile_a, t_list **pile_b)
{
	int		size_pile;
	int		return_check_pile_sorted;

	size_pile = ft_lstsize(*pile_a);
	return_check_pile_sorted = check_pile_sorted(pile_a);
	if (return_check_pile_sorted == 1)
		exit (0);
	if (size_pile > 5)
		radix(pile_a, pile_b);
	else if (size_pile == 5 || size_pile == 4)
		middle_tri(pile_a, pile_b);
	else if (size_pile == 3)
		tree_number(pile_a);
	else if (size_pile == 2)
		sa(pile_a);
	return ;
}
