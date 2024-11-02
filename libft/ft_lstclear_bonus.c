#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	int i = 0;
	while ((*lst)->next != NULL)
	{
		ft_lstdelone(*lst, del);
		(*lst) = (*lst)->next;
	}
	free(*lst);
}