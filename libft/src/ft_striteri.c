#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t len;
	unsigned int i;

	len = strlen(s);
	i = 0;
	while ((size_t)i < len)
		f(i++, s++);
}