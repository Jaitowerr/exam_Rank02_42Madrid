#include <unistd.h>



void	rstr_capitalizer(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];


        if (c >= 'A' && c <= 'Z')
			c += 32;


        if ((c >= 'a' && c <= 'z') && (str[i + 1] == '\0' || str[i + 1] == ' ' || str[i + 1] == '\t'))
            c -= 32;

		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}




int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		rstr_capitalizer(argv[i]);
		i++;
	}
	return (0);
}