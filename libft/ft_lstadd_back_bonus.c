#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *head;
	head = *lst;
	while (*lst != NULL || head->next != NULL)
		head = head->next;
	head->next = new;
	new->next = NULL;
}