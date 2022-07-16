int	is_power_of_2(unsigned int n)
{
	if (n == 0)
	{
		return (0);
	}
	while (n % 2 == 0)
	{
		n /= 2;
	}
	if (n == 1)
	{
		return (1);
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	unsigned int	n;

	n = is_power_of_2(4);
	if (n == 0)
	{
		printf("return = %i is not power of 2\n", n);
	}
	else
	{
		printf("return = %i, is power of 2\n", n);
	}
}*/
