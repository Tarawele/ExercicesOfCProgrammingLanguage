#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	i2;

	i = 0;
	i2 = 0;
	while (s[i] != '\0')
	{
		i2 = 0;
		while (reject[i2] != '\0')
		{
			if (s[i] == reject[i2])
			{
				return (i);	
			}
			i2++;
		}
		i++;
	}
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
char	*ft_strn(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	return ((void *)0);
}

size_t  ft_strcspn(const char *s, const char *reject)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if(ft_strn(reject, s[i]))
		{
			break;
		}
		i++;
	}
	return (i);

}
*/
int	main()
{
	char	s[] = "1234567890";
	char	reject[] = "9876";

	printf("| ft_len = %li\n", ft_strcspn(s, reject));
	return (0);
}
