int	max(int* tab, unsigned int len)
{
	int	max;

	if (len > 0)
	{
		max = tab[0];
		while (len--)
		{
			if (tab[len] > max)
			{
				max = tab[len];
			}
		}
		return (max);
	}
	return (0);
}
/*
#include <stdio.h>

void	ft_putchar(char *c)
{
	write(1, &c, 1);
}
int	main(void)
{
	int	tab[2] = {1, 3};
	printf("max= %d\n", max(tab, 2));	
}
*/
