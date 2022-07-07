#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	rev_print(char *str)
{
	int	i;

	i = ft_strlen(str);
	while (i)
	{
		i--;
		write(1, (str + i), 1);
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		rev_print(argv[1]);
	}
	write(1, "\n", 1);
}
