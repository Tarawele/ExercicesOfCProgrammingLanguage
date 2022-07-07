#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	int	c;

	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	c = 48 + n % 10;
	write(1, &c, 1);
}

void	fizzbuzz(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			write(1, "fizz\n", 5);
		}
		else if (i % 5 == 0)
		{
			write(1, "buzz\n", 5);
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			write(1, "fizzbuzz\n", 9);
		}
		else
		{
			ft_putnbr(i);
			write(1, "\n", 1);
		}
		i++;
	}
}

int	main(void)
{
	fizzbuzz();
}
