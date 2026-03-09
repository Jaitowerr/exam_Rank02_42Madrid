#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size);

static void	print_tab(int *tab, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		if (i + 1 < size)
			printf(" ");
		i++;
	}
	printf("\n");
}

int	main(void)
{
	int	a[] = {3, 1, 2, 2, -5, 10, 0};
	int	b[] = {42};
	int	c[] = {5, 4, 3, 2, 1};
	unsigned int	size_a = sizeof(a) / sizeof(a[0]);
	unsigned int	size_b = sizeof(b) / sizeof(b[0]);
	unsigned int	size_c = sizeof(c) / sizeof(c[0]);

	printf("Before a: ");
	print_tab(a, size_a);
	sort_int_tab(a, size_a);
	printf("After  a: ");
	print_tab(a, size_a);

	printf("\nBefore b: ");
	print_tab(b, size_b);
	sort_int_tab(b, size_b);
	printf("After  b: ");
	print_tab(b, size_b);

	printf("\nBefore c: ");
	print_tab(c, size_c);
	sort_int_tab(c, size_c);
	printf("After  c: ");
	print_tab(c, size_c);

	return (0);
}