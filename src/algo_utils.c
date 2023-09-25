#include "push_swap.h"

void	copy_pile(Pile a, Pile b)
{
	int x;

	x = 0;
	while (b.tab[x])
	{
		a.tab[x] = b.tab[x];
		x++;
	}
	return ;
}
