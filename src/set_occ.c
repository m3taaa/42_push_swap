# include "../header/push_swap.h"

static	int	find_max(t_list	*pile_a)
{
	int max;

	max = pile_a->content;
	pile_a = pile_a->next;
	while (pile_a)
	{
		if (pile_a->content > max)
			max = pile_a->content;
		pile_a = pile_a->next;
	}
	return (max);
}

static int	find_min(t_list	*pile_a)
{
	int min;
	
	min = pile_a->content;
	pile_a = pile_a->next;
	while (pile_a)
	{
		if (pile_a->content < min)
			min = pile_a->content;
		pile_a = pile_a->next;
	}
	return (min);
}

static void	set_max_min_pile(t_list *pile_a, int max, int min)
{
	int size_pile;

	size_pile = ft_lstsize(pile_a);
	while (pile_a)
	{
		if (pile_a->content == max)
			pile_a->occ = size_pile - 1;
		if (pile_a->content == min)
			pile_a->occ = 0;
		pile_a = pile_a->next;
	}
	return ;
}

static void	set_all_pile(t_list *pile)
{
	int min_temp;
	int	x;
	int	size_pile;
	t_list	*head;

	x = 1;
	head = pile;
	size_pile = ft_lstsize(pile) - 1;
	while (x < size_pile)
	{
		while (pile && pile->occ != -1)
			pile = pile->next;
		if (!pile)
			return ;
		min_temp = pile->content;
		pile = head;
		while (pile)
		{
			if (pile->occ == -1 && pile->content < min_temp)
				min_temp = pile->content;
			pile = pile->next;
		}
		pile = head;
		while (pile)
		{
			if (pile->content == min_temp)
			{
				pile->occ = x;
				break;
			}
			pile = pile->next;
		}
		pile = head;
		x++;
	}
	return ;
}

void	set_occ(t_list	**pile_a)
{
	int max;
	int min;

	max = find_max(*pile_a);
	min = find_min(*pile_a);
	set_max_min_pile(*pile_a, max, min);
	set_all_pile(*pile_a);
	return ;
}
