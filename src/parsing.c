#include "../header/push_swap.h"

static int	check_number(char **tab)
{
	size_t	x;
	size_t	y;

	x = 0;
	while (tab[x])
	{
		if (tab[x][0] == '-' || tab[x][0] == '+')
			y = 1;
		else
			y = 0;
		while (y < ft_strlen(tab[x]))
		{
			if (tab[x][y] > 57)
				return (1);
			else if (tab[x][y] < 48)
				return (1);
			y++;
		}
		x++;
	}
	return (0);
}

static int	check_double(char **tab)
{
	int x;
	int	y;
	int	z;
	int	*tab_int;

	x = 0;
	while (tab[x])
		x++;
	tab_int = malloc(sizeof(int) * x);
	if (!tab_int)
		return (1);
	y = 0;
	while (tab[y])
	{
		tab_int[y] = ft_atoi(tab[y]);
		y++;
	}
	y = 0;
	while (y < x)
	{
		z = 0;
		while (z < x)
		{
			if (tab_int[y] == tab_int[z] && z != y)
			{
				free(tab_int);
				return (1);
			}
			z++;
		}
		y++;
	}
	free(tab_int);
	return (0);
}

static int	check_size_number(char **argument)
{
	int x;

	x = 0;
	while (argument[x])
		x++;
	if (x < 1)
		return (1);
	return (0);
}

int	parsing(char *argument)
{
	char	**tab;
	int		verification_number;
	int		verification_double;
	int		verification_size;

	tab = ft_split(argument, ' ');
	if (!tab || tab == NULL)
		return (1);
	verification_size = check_size_number(tab);
	if (verification_size == 1)
	{
		free(tab);
		return (1);
	}
	verification_number = check_number(tab);
	if (verification_number == 1)
	{
		free(tab);
		return (1);
	}
	verification_double = check_double(tab);
	if (verification_double == 1)
	{
		free(tab);
		return (1);
	}
	free(tab);
	return (0);
}
