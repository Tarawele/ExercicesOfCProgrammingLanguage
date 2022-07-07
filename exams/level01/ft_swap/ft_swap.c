#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

int	main(void)
{	int	a;
	int	b;
	
	a = 1;
	b = 2;
	printf("a = %i b = %i", a, b);
	ft_swap(&a, &b);
	printf("a = %i b = %i", a, b);
}
