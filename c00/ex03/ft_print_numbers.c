#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	digits;

	digits = 48;
	while (digits <= 57)
	{
		ft_putchar(digits);
		digits++;
	}
}

int	main(void)
{
	ft_print_numbers();
	printf("\n");
	return (0);
}
