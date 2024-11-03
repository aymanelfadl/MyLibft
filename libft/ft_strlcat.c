#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	slen = ft_strlen(src);
	if (!dst && size == 0)
		return (slen);
	dlen = ft_strlen(dst);
	j = dlen;
	if (size <= dlen)
		return (size + slen);
	i = 0;
	while (src[i] && j + 1 < size)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = 0;
	return (dlen + slen);
}

#include <stdio.h>

int	main(void)
{
	char dest[50] = "Hello, ";
	const char *src = "world!";
	size_t size = 50;
	size_t result;

	result = ft_strlcat(dest, src, size);
	printf("Resulting string: %s\n", dest);
	printf("Total length: %zu\n", result);

	return (0);
}