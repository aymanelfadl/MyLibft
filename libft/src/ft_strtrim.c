#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t start;
	size_t end;
	size_t i;
	char *ptr;

	start = 0;
	end = 0;
	i = 0;
	while (strchr(set, s1[i++]))
		start++;
	i = strlen(s1);
	while (strchr(set, s1[--i]))
		end++;
	ptr = (char *)malloc((strlen(s1) - (start + end) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (start < strlen(s1) - end)
		ptr[i++] = s1[start++];
	return (ptr);
}
