#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return;
	if (*lst == NULL)
		*lst = new;
	else
	{
		t_list *tmp;
		tmp = ft_lstlast(*lst);
		tmp->next = new;
	}
}