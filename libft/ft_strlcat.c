#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	i;
	size_t	j;

	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	dlen = ft_strlen(dst);
	if (!src)
		return (dlen + dstsize);
	if (dlen >= dstsize)
		return (dstsize);
	i = 0;
	j = dlen;
	while (src[i] && j - 1 < dstsize)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dlen + ft_strlen(src));
}

// #include <string.h>
// int	main(void)
// {
// 	char buffer[50] = "ayman";
// 	printf("%zu", strlcat(buffer,"l",50));
// }
