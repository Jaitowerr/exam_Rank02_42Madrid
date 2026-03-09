#include <unistd.h>

static int	is_sep(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}



static void	print_word(char *str, int start, int end)
{
	while (start <= end)
	{
		write(1, &str[start], 1);
		start++;
	}
}



void	rostring(char *str)
{
	int	i;
	int	start;
	int	end;
	int	printed;

	i = 0;
	while (is_sep(str[i]))
		i++;

	start = i;
	while (str[i] && !is_sep(str[i]))
		i++;
	end = i - 1;

	while (is_sep(str[i]))
		i++;
    
	printed = 0;
	while (str[i])
	{
		while (is_sep(str[i]))
			i++;
		if (str[i])
		{
			if (printed)
				write(1, " ", 1);
			while (str[i] && !is_sep(str[i]))
			{
				write(1, &str[i], 1);
				i++;
			}
			printed = 1;
		}
	}
	if (start <= end)
	{
		if (printed)
			write(1, " ", 1);
		print_word(str, start, end);
	}
}




int	main(int argc, char **argv)
{
	if (argc == 2)
		rostring(argv[1]);
	write(1, "\n", 1);
	return (0);
}