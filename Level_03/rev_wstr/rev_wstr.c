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



void	rev_wstr(char *str)
{
	int	i;
	int	end;
	int	first;

	i = 0;
	while (str[i])
		i++;
    i--;

	first = 1;
	while (i >= 0)
	{
		if (!is_sep(str[i]))
		{
			end = i;
			while (i > 0 && !is_sep(str[i - 1]))
				i--;
			if (!first)
				write(1, " ", 1);
			print_word(str, i, end);
			first = 0;
		}
		i--;
	}
}


int	main(int argc, char **argv)
{
	if (argc == 2)
		rev_wstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}