/*#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_arr_int(int	*tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_putchar(tab[i] + 48);
		i++;
	}
}*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = -1;
	while (i++ < --size)
	{
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;
	}
}
/*
int	main(void)
{
	int	tab[4] = {1, 2, 4};

	ft_arr_int(tab, 3);
	ft_putchar('\n');
	ft_rev_int_tab(tab, 3);
	ft_arr_int(tab, 3);
	return (0);
}*/
