#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_line(int width, char begin_symbole, char middle_symbole, char end_symbole)
{
	int	i;

	i = 1;
	while ( i <= width)
	{
		if (i == 1)
		{
			ft_putchar(begin_symbole);
		}
		if (i <= (width - 1))
		{
			ft_putchar(middle_symbole);
		}
		if (i == width)
		{
			ft_putchar(end_symbole);
		}
		i++;
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	while (i <= y)
	{
		if (i == 1)
		{
			ft_print_line(x, 'o', '-', 'o');
		}
		if (i <= (y - 1))
		{
			ft_print_line(x, '|', ' ', '|');
		}
		if (i == y)
		{
			ft_print_line(x, 'o', '-', 'o');
		}
		ft_putchar('\n');
		i++;
	}
}

int	main()
{
	void	rush(int x, int y);

	rush(5, 1);
	return (0);
}
