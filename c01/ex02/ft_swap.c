void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	printf("a = %i and b = %i\n", a, b);
	ft_swap(&a, &b);
	printf("a = %i and b = %i\n", a, b);
}*/
