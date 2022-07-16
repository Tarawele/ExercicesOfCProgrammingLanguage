#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	a;
	int	b;
	char	op;
	int	answer;
	
	answer = 1;
	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		op = argv[2][0];
		if ( op == '+')
		{
			answer = a + b;
		}
		else if (op == '-')
		{
			answer = a - b;
		}
		else if ( op == '*')
		{
			answer = a * b;
		}
		else if (op == '/')
		{
			answer = a / b; 
		}
		else if (op == '%')
		{
			answer = a % b;
		}
		printf("%d\n", answer);
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}
