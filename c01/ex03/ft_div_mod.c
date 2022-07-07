void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 21;
	b = 10;
	ft_div_mod(a, b, &div, &mod);
	printf(" div = %i and mod = %i\n", div, mod);
}*/
