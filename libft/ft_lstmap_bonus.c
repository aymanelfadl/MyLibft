#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *head = ft_lstnew(f(lst->content));
	t_list *new = head;
	while (lst->next != NULL)
	{
		new->content = f(lst->content);
		new = lst->next;
		del(lst->content);
		free(lst);
	}
	new->next = NULL;
	return (head);
}