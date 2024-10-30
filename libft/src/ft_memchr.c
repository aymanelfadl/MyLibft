#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
		size_t i;

	if (s != NULL)
	{
		str = (unsigned char *)s;
		i = 0;
		while (i < n && *str)
		{
			if (*str == (char)c)
				return (str);
			str++;
			i++;
		}
	}
	return (NULL);
}
