#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t start;
	size_t end;
	size_t i;
	char *ptr;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	start = 0;
	end = 0;
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
	{
		start++;
		i++;
	}
	i = ft_strlen(s1);
	while (i > start && ft_strchr(set, s1[i - 1]))
	{
		end++;
		i--;
	}
	ptr = (char *)malloc((ft_strlen(s1) - start - end + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (start < ft_strlen(s1) - end)
		ptr[i++] = s1[start++];
	ptr[i] = '\0';
	return (ptr);
}