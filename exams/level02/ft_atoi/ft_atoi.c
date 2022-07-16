/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
*/
int	ft_atoi(const char *str)
{
	int	ans;
	int	sign;

	sign = 1;
	ans = 0;
	while (*str == 32 || (*str >= 7 && *str <= 13))
		str++;
	if (*str == '-')
		sign *= -1;
	while (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		ans = ans * 10 + *str - '0';
		str++;
	}
	return (ans * sign);
}
/*
int	main(int ac, char *argv[])
{
	if (ac == 2)
	{
		int 	a;
		int	b;

		a = ft_atoi(argv[1]);
		b = atoi(argv[1]);
		printf("ft_atoi a = %i | atoi b = %i\n", a, b);

	}
	write(1, "\n", 1);
}*/
