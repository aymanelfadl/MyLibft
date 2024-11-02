#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return;

	t_list *node;

	node = *lst;
	node->next = (*lst)->next;
	(*lst)->next = new;
	new->next = node->next;
}
