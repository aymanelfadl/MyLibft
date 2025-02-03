#include <stdio.h> 
#include "libft.h"
#include <fcntl.h>

int main()
{
    char *d = NULL;
    int fd = open("test.txt", O_RDWR);
    while ((d = get_next_line(fd)) != NULL)
    {
        ft_printf("%s",d);
        free(d);
    }
    return 0;
    }