#include <unistd.h>
#include <stdio.h>

int negative_int(void);

int	main(void)
{
	int	n;
	int	i;
	int	s;

	i = 0;
	printf("Enter n value: ");
	s = scanf("%d\n", &n);
	
	int 	scores[n];

	while (i < n)
	{
		scores[i] = s;
		i++;
	}
	printf("the average of scores is %f", (scores[0] + scores[1] + scores[2]) / 3.0); 
}
