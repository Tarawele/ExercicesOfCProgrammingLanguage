/*#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;

	i = 128;
	while (i > 0)
	{
		if (octet >= i)
		{
			write(1, "1", 1);
			octet %= i;
			i /= 2;
		}
		else
		{
			write(1, "0", 1);
			i /= 2;
		}
	}
}
*/
unsigned char	swap_bits(unsigned char octet)
{
	return (octet << 4) | (octet >> 4);
}
/*
#include <unistd.h>

int	main(void)
{
	unsigned char c;

	c = '.';
	write(1, &c, 1);
	write(1, "\n", 1);
	print_bits(c);
	write(1, "\n", 1);
	c = swap_bits(c);
	write(1, &c, 1);
	write(1, "\n", 1);
	print_bits(c);
}
*/
