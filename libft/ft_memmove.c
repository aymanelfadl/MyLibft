#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *s;
	unsigned char *d;
	unsigned char tmp[len];
	size_t i;

	if (dst == NULL && src == NULL)
		return NULL;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	while (i < len)
	{
		tmp[i] = s[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		d[i] = tmp[i];
		i++;
	}
	return (dst);
}
