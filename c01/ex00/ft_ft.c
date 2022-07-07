#include <stdio.h>
#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	n;

	ft_ft(&n);
	printf("nbr = %i\n", n);
	return (0);
}

