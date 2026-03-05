#include <unistd.h>
#include <stdlib.h>


int	ft_atoi(char *str)
{
	int	result;
	int	i;

	i = 0;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}


void	print_hex(int n)
{
	char	*hex_digits;
	char	buffer[20];
	int		i;

    hex_digits = "0123456789abcdef";

    if (n == 0)
	{
		write(1, "0", 1);
		return ;
	}

	i = 0;
    while (i <= 19)
	    buffer[i++] = '\0';
	i--;

	while (n > 0)
	{
		buffer[i] = hex_digits[n % 16];
		n = n / 16;
		if (n > 0)
			i--;
	}

	while (buffer[i])
	{
		write(1, &buffer[i], 1);
		i++;
	}
}


//void	print_hex(int n)
//{
//	char	base;
//
//	base = "0123456789abcdef";
//	if (n >= 16)
//		print_hex(n / 16);
//	write(1, &base[n % 16], 1);
//}



int	main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}