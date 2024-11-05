/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelfadl <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:33:49 by aelfadl           #+#    #+#             */
/*   Updated: 2024/11/05 11:33:50 by aelfadl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wc(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c && (*s == '\0' || *(s - 1) == c))
			count++;
		s++;
	}
	return (count);
}

static char	*ft_strdupme(char const *s, int start, int end)
{
	char	*res;
	int		i;

	res = (char *)malloc((end - start + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (start < end)
		res[i++] = s[start++];
	res[i] = '\0';
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;
	int		mark;

	if (!s)
		return (NULL);
	res = (char **)malloc((ft_wc(s, c) + 1) * sizeof(char *))
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	mark = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && mark < 0)
			mark = i;
		else if ((s[i] == c || s[i] == '\0') && mark >= 0)
		{
			res[j++] = ft_strdupme(s, mark, i);
			if (!res[j - 1])
				return (NULL);
			mark = -1;
		}
		i++;
	}
	res[j] = NULL;
	return (res);
}