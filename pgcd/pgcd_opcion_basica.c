// el Máximo Común Divisor Es el mayor número entero positivo que divide exactamente a ambos números.

#include <stdio.h>   // para printf
#include <stdlib.h>  // para atoi

int	main(int argc, char **argv)
{
	int	a;
	int	b;
	int	i;

	if (argc != 3)
	{
		printf("\n");
		return (0);
	}


	a = atoi(argv[1]);
	b = atoi(argv[2]);


	if (a <= 0 || b <= 0)
	{
		printf("\n");
		return (0);
	}


	if (a < b)
		i = a;
	else
		i = b;


	while (i >= 1)
	{
		if (a % i == 0 && b % i == 0)
		{
			printf("%d\n", i);
			return (0);
		}
		i--;
	}

	return (0);
}
