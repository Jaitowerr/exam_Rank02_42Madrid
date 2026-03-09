#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str);

int	main(void)
{
	char	**result;
	int		i;

	// Test 1: caso normal
	printf("Test 1: 'hola mundo 42'\n");
	result = ft_split("hola mundo 42");
	i = 0;
	while (result[i])
	{
		printf("[%s]\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);

	// Test 2: espacios multiples
	printf("\nTest 2: '  hola   mundo.  .'\n");
	result = ft_split("  hola   mundo.  .");
	i = 0;
	while (result[i])
	{
		printf("[%s]\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);

	// Test 3: tabulaciones y saltos de linea
	printf("\nTest 3: 'hola\\tmundo\\n42'\n");
	result = ft_split("hola\tmundo\n42");
	i = 0;
	while (result[i])
	{
		printf("[%s]\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);

	// Test 4: string vacio
	printf("\nTest 4: ''\n");
	result = ft_split("");
	i = 0;
	while (result[i])
	{
		printf("[%s]\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);

	return (0);
}