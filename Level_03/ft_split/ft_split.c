#include <stdlib.h>

static int	is_sep(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}




static int	count_words(char *str)
{
	int	count;
	int	in_word;        //bandera a si está dentor de una palabra o no

	count = 0;
	in_word = 0;

	while (*str)
	{
		if (!is_sep(*str) && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (is_sep(*str))
			in_word = 0;
		str++;
	}
	return (count);
}





static char	*get_word(char *str, int start, int end)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);

	i = 0;
	while (start < end)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}




char	**ft_split(char *str)
{
	char	**result;
	int		i;
	int		j;
	int		start;

	result = malloc(sizeof(char *) * (count_words(str) + 1));
	if (!result)
		return (NULL);
    
	i = 0;
	j = 0;
	while (str[i])
	{
		if (is_sep(str[i]))   // Si es separador avanzo hasta que no
            i++;
        else
        {
            start = i;
            while (str[i] && !is_sep(str[i]))
                i++;
            result[j++] = get_word(str, start, i);
        }
	}
	result[j] = NULL;
	return (result);
}