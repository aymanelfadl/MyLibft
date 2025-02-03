/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelfadl <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:34:02 by aelfadl           #+#    #+#             */
/*   Updated: 2024/11/05 11:34:05 by aelfadl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
<<<<<<< HEAD
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0' && *s == '\0')
		return ((char *)s);
=======
			return (char*)(s);
		s++;
	}
	if ((char)c == '\0' && *s == '\0')
		return (char*)(s);
>>>>>>> origin/libft-with-printf-and-get_next_line
	return (NULL);
}
