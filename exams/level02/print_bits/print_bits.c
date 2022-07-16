#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;

	i = 128;
	while (i > 0)
	{
		if (octet >= i)
		{
			write(1, "1", 1);
			octet %= 2;
			i /= 2;
		}
		else
		{
			write(1, "0", 1);
			i /= 2;
		}
	}
	write(1, "\n", 1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*a;

	a = print_bits(2);
	printf("In bits 2 = %s", a);
	print_bits(128);
	return (0);
}*/
