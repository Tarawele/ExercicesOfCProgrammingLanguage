#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = 122;
	j = i - 32;
	while (k <= 25)
	{	
		if ((k % 2) == 1)
		{
			ft_putchar(j);
		}
		else
		{
			ft_putchar(i);
		}
		k++;
		j--;
		i--;
	}
	write(1, "\n", 1);
}
