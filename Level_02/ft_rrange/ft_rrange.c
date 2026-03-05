#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int		*array;
	int		len;
	int		i;

	if (start <= end)
		len = end - start + 1;
	else
		len = start - end + 1;

	array = (int *)malloc(sizeof(int) * len);
	if (!array)
		return (NULL);

	i = 0;
	while (i < len)
	{
		array[i] = end;
		if (end < start)
			end++;
		else if (end > start)
			end--;
		i++;
	}
	return (array);
}