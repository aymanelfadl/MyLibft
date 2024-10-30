#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t len;
	char *res;
	unsigned int i;

	len = strlen(s);
	res = (char *)malloc((len + 1) + sizeof(char));
	if (res == NULL)
		return (NULL);
	i = 0;
	while ((size_t)i < len)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}