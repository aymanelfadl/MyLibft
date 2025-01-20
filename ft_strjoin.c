/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelfadl <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:34:42 by aelfadl           #+#    #+#             */
/*   Updated: 2024/11/05 11:34:43 by aelfadl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*res;
	size_t	lens1;
	size_t	lens2;

	lens1 = 0;
	lens2 = 0;
	if (!s1 && !s2)
		return (NULL);
	if (s1)
		lens1 = ft_strlen(s1);
	if (s2)
		lens2 = ft_strlen(s2);
	res = malloc(lens1 + lens2 + 1);
	if (!res)
		return (NULL);
	if (s1)
		ft_memcpy(res, s1, lens1);
	if (s2)
		ft_memcpy(res + lens1, s2, lens2);
	res[lens1 + lens2] = '\0';
	return (res);
}

