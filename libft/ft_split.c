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
	int	start;

	start = 0;
	count = 0;
	while (*s)
	{
		if (*s != c && !start && *s != '\0')
		{
			count++;
			start = 1;
		}
		else if (*s == c)
			start = 0;
		s++;
	}
	return (count);
}

static char	*ft_strdupme(char const *str, int start, int end)
{
	char	*res;
	int		i;

	res = (char *)malloc(((end - start) + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (start < end)
	{
		res[i++] = str[start++];
	}
	res[i] = '\0';
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	int		mark;
	int		j;

	if (s == NULL)
		return (NULL);
	i = 0;
	mark = -1;
	j = 0;
	res = (char **)malloc((ft_wc(s, c) + 1) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && mark < 0 && s[i] != '\0')
			mark = i;
		else if ((s[i] == c || s[i] == '\0') && mark >= 0)
		{
			res[j] = ft_strdupme(s, mark, i);
			if (res[j] == NULL)
			{
				while (j > 0)
					free(res[j--]);
				return (NULL);
			}
			j++;
			mark = -1;
		}
		i++;
	}
	res[j] = NULL;
	return (res);
}
