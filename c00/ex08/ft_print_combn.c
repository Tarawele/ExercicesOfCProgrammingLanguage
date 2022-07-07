#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int	a;
	int	b;

	a = 0;
	while ((n > 0) & (n < 10))
	{
		b = a + 1;
		while (b <= 9)
		{
			ft_putchar(a + 48);
			ft_putchar(b + 48);
			write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_combn(3);
}
