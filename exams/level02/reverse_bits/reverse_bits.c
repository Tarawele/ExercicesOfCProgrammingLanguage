/*
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
unsigned char	reverse_bits(unsigned char octet)
{
	unsigned int	i;
	unsigned char	r;

	i = 8;
	r = 0;
	while (i--)
	{
		r = (r << 1) | (octet & 1);
		octet = octet >> 1;
	}
	return (r);
}
/*
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	unsigned char	c;

	c = '2';
	write(1, &c, 1);
	write(1, "\n", 1);
	print_bits('2');
	write(1, "\n", 1);
	c = reverse_bits(c);
	write(1, &c, 1);
	write(1, "\n", 1);
	print_bits('L');
	write(1, "\n", 1);
}*/
