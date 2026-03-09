
#include "list.h"
#include <stdlib.h>

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*cur;
	int		temp;
	int		bandera;

	bandera = 1;
	while (bandera)
	{
		bandera = 0;
		cur = lst;
		while (cur != NULL && cur->next != NULL)
		{
			if (!(*cmp)(cur->data, cur->next->data))
			{
				temp = cur->data;
				cur->data = cur->next->data;
				cur->next->data = temp;
				bandera = 1;
			}
			cur = cur->next;
		}
	}
	return (lst);
}