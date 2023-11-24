# include "../header/push_swap.h"

int		find_bits_max(t_list **pile)
{
	int	size;
	int	bits;
	

	size = ft_lstsize(*pile) - 1;
	bits = 0;
	while ((size >> bits) != 0)
		bits++;
	return (bits);

}

void	radix(t_list	**pile_a, t_list	**pile_b)
{
	t_list	*tmp;
	int		x;
	int		y;
	int		pile_size;
	int		bits_max;

	x = 0;
	tmp = *pile_a;
	pile_size = ft_lstsize(*pile_a);
	bits_max = find_bits_max(pile_a);
	while (x < bits_max)
	{
		y = 0;
		while (y++ < pile_size)
		{
			tmp = *pile_a;
			if (((tmp->occ >> x) & 1) == 1)
				rotate(pile_a);
			else
				pb(pile_a, pile_b);
		}
		while (ft_lstsize(*pile_b) != 0)
			pa(pile_b, pile_a);
		x++;
	}
	return ;
}
