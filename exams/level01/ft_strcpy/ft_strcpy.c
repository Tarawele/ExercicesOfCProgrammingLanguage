#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int	main(void)
{
	char	*s2;
	char	s1[5];

	s2 = "Hello";
	printf("s2 = %s", s2);
	ft_strcpy(s1, s2);
	printf("After copy s1 = %s", s1);
	
}
