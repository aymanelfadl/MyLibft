#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*node;

	node->next = (*lst)->next;
	(*lst)->next = new;
	new->next = node->next;
}
