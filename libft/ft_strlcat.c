#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t dlen;
    size_t i;
    size_t j;

    if (!dst && dstsize == 0)
        return (ft_strlen(src));
    dlen = ft_strlen(dst);
    if (!src)
        return (dlen + dstsize);
    if (dlen >= dstsize)
        return (dstsize + ft_strlen(src));

    i = 0;
    j = dlen;

    while (src[i] && j < dstsize - 1)
    {
        dst[j] = src[i];
        i++;
        j++;
    }
    dst[j] = '\0';
    return (dlen + ft_strlen(src)); 
}