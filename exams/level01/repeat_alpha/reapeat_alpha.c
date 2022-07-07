#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	letter;

	i = 0;
	letter = 0;
	if (argc == 1)
		write(1, "\n", 1);
	else
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				letter = argv[1][i] - 96;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				letter = argv[1][i] - 64;
			while (letter--)
				write(1, &argv[1][i], 1);
			letter = 1;
			i++;
		}
		write(1, "\n", 1);
	}
}
