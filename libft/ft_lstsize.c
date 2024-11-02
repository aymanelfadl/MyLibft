#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	if (lst != NULL)
		return (0);
	len = 1;
	while (lst->next != NULL)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}
