# include "../header/push_swap.h"

static	t_list	*init_pile(char *string)
{
	t_list	*pile_a;
	t_list	*temp;
	char	**tab;
	int		x;

	x = 1;
	tab = ft_split(string, ' ');
	pile_a = ft_lstnew(ft_atoi(tab[0]));
	pile_a->occ = -1;
	while (tab[x] != NULL)
	{
		temp = ft_lstnew(ft_atoi(tab[x]));
		temp->occ = -1;
		ft_lstadd_back(&pile_a, temp);
		x++;
	}
	return (pile_a);
}

int	main(int ac, char **av)
{
	t_list	*pile_a;
	t_list	*pile_b;
	if (ac == 2)
	{
		int	parsing_value;
		parsing_value = parsing(av[1]);
		if (parsing_value == 1)
		{
			write(STDERR_FILENO, "Error\n", 6);
			return (0);
		}	
		pile_a = init_pile(av[1]);
		set_occ(&pile_a);
		algo(&pile_a, &pile_b);
	}
	if (ac != 2)
		write(STDERR_FILENO, "Error\n", 6);
	system("leaks push_swap");
	return (0);
}
