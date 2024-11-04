#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	ptr = (unsigned char *)malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, count * size);
	return ((void *)ptr);
}
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	int *p =malloc(10);
	p++;
	free(p);
}