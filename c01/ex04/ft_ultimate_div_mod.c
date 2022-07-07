void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
}
/*
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_putnbr(int	n)
{
	int	c;

	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		n = 147483648;
		ft_putnbr(n);
	}
	else if ( n < 0)
	{
		ft_putchar('-');
		n = -n;
		ft_putnbr(n);
	}
	else
	{
		if ( n > 9)
			ft_putnbr(n / 10);
		c = n % 10 + 48;
		ft_putchar(c);
	}
	return (0);
}
#include <stdio.h>
#include <limits.h>
int	main(void)
{
	int	a;
	int	b;

	printf("Int_min = %i and Int_max = %i\n", INT_MIN, INT_MAX);
	ft_putnbr(-2147483648);
	ft_putnbr(2147483647);
	ft_putchar('\n');
	a = 3111;
	b = 100;
	ft_ultimate_div_mod(&a, &b);
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putnbr(b);
	ft_putchar('\n');
}*/
