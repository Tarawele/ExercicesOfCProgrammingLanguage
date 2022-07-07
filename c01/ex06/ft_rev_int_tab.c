#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = -1;
	while (i < size / 2)
	{
		tab[i] = tab[size - 1 - i];
		write(1, &tab[i], 1);
		i++;
	}
}

#include <stdio.h>

int	main(void)
{
	int	array tab[] = {1, 2, 4, 5};

	ft_rev_int_tab(tab, 4);
}
