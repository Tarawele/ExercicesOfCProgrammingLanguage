#include <stdlib.h>
/*#include <stdio.h>
#include <string.h>*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *s)
{
	int	i;
	int	len;
	char	*cpy;

	i = 0;
	len = ft_strlen(s);
	cpy = (char *)malloc(sizeof(char) * len + 1);
	if (cpy == NULL)
	{
		return (NULL);
	}
	while (s[i])
	{
		cpy[i] = s[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
/*
int	main()
{
	char	*s;
	char	*sr;
	char	*sr1;

	s = "Hello";
	sr = ft_strdup(s);
	sr1 = strdup(s);
	printf("sr = %s\n | sr1 = %s\n", sr, sr1);
}*/
