#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t lent;
	char *res;
	size_t i;
	size_t j;

	if (!s1 || !s2)
		return (NULL);

	i = 0;
	j = 0;
	lent = strlen(s1) + strlen(s2);
	res = (char *)malloc((lent + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (i < strlen(s1))
	{
		res[i] = s1[i];
		i++;
	}
	while (i < lent)
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}
