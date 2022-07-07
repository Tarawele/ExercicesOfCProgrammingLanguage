#include <unistd.h>
//#include <stdio.h>

void ft_putnbr(int n);

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

//int	main(void)
//{
//	printf("i = %i", ft_strlen("hi!"));
//}
