#include <unistd.h>
#include <stdio.h>

int	main(int ac, char *argv[])
{
	int		i;
	char	*lw;

	i = 0;
	if (ac == 2)
	{
		while (argv[1][i] != '\0')
		{
			if ((argv[1][i] <= 32) && (argv[1][i + 1] > 32))
			{
				lw = &argv[1][i + 1];
			}
			i++;
		}
		i = 0;
		while (lw && lw[i] > 32)
		{
			write(1, &lw[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
