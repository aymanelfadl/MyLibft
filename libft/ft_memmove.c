/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelfadl <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:31:58 by aelfadl           #+#    #+#             */
/*   Updated: 2024/11/05 13:09:03 by aelfadl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst < src)
	{
		i = 0;
		while (i < len)
		{
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
			i++;
		}	
		return (dst);
	}
	else
	{
		i = len;
		while (i > 0)
		{
			i--;
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
		}
		return (dst);
	}
}
#include <stdio.h>
#include <string.h>
int main ()
{
	char t[]= "0123456789";
	printf("%s\n", ft_memmove(t,t+6,5));
}