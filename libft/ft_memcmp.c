#include "libft.h"

int ft_memcmp(const void *dest, const void *src, size_t n)
{
	unsigned char *c1;
	unsigned char *c2;
	size_t i;

	c1 = (unsigned char *)dest;
	c2 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		if (c1[i] != c2[i])
			return (c1[i] - c2[i]);
		i++;
	}
	return (0);
}
