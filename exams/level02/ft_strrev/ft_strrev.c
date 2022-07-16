
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	int	i;
	int	len;
	char	tmp;

	len = ft_strlen(str) - 1;
	i = 0;
	while (len > i)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		len--;
		i++;
	}
	return (str);
}
/*
#include <unistd.h>

void	ft_putchar(char *s)
{
	while(*s)
		write(1, s++, 1);
}
int	main(int ac, char **ch)
{
	if (ac == 2)
	{
		ft_putchar(ft_strrev(ch[1]));
	}
	write(1, "\n", 1);
}*/
