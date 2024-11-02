#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void ft_print(void *p)
{
	printf("%d\n",*(int *)p);
}
int	main(void)
{

	int c1 = 1;
	int c2 = 2;
	int c3 = 3;

	t_list *node1 = ft_lstnew(&c1);
	t_list *node2 = ft_lstnew(&c2);
	t_list *node3 = ft_lstnew(&c3);
	
	ft_lstadd_back(&node1,node2);
	ft_lstadd_back(&node1,node3);
	printf("hi:\n");
	ft_lstiter(node1,ft_print);

	int c4 = 0;

	t_list *head = ft_lstnew(&c4);

	ft_lstadd_front(&node1,head);
	printf("new hi:\n");
	ft_lstiter(head,ft_print);

	printf("wech a map:\n");
	ft_lstmap()
	

}