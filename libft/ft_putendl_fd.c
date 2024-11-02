#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	if (s == NULL || fd < 0)
		return;
	write(fd, s, strlen(s));
	write(fd, "\n", 1);
}
