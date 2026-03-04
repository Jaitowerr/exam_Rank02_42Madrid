

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	n;

	if (a == 0 || b == 0)
		return (0);
	
	// Empezamos a probar desde el más grande de los dos
	if (a > b)
		n = a;
	else
		n = b;

	// Vamos incrementando n hasta que sea divisible por ambos
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		n++;
	}
}
