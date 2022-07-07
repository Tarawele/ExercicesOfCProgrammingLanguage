/*#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_arr_int(int *tab, int size)
{
	int	i;

	i = -1;
	while (++i < size)
	{
		ft_putchar(tab[i] + '0');
	}
}
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;

			}
			i++;
		}
		size--;	
	}
}
/*
int	main(void)
{
	int	tab[] = {1, 5, 4, 2};

	ft_arr_int(tab, 4);
	ft_putchar('\n');
	ft_sort_int_tab(tab, 4);
	ft_arr_int(tab, 4);
	ft_putchar('\n');
	return (0);
}*/
