/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelfadl <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:30:11 by aelfadl           #+#    #+#             */
/*   Updated: 2024/11/05 11:30:12 by aelfadl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	new_list = NULL;
	while (lst && f && del)
	{
		new_content = f(lst->content);
		if (!new_content)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
void	*f(void *c)
{
	char	*res;
	int		i;

	res = ft_strdup(c);
	i = 0;
	while (res[i])
	{
		res[i] = ft_toupper(res[i]);
		i++;
	}
	return (res);
}
void	del(void *c)
{
	free(c);
}
#include <stdio.h>

int	main(void)
{
	char	a[] = "ayman is the best";
	char	b[] = "youssef is the best";
	t_list	*node1;
	t_list	*node2;
	t_list	*newList;

	node1 = ft_lstnew(&a);
	node2 = ft_lstnew(&b);
	ft_lstadd_back(&node1, node2);
	newList = ft_lstmap(node1, f, del);
	printf("%s\n", (char *)newList->content);
	newList = newList->next;
	printf("%s\n", (char *)newList->content);
}
