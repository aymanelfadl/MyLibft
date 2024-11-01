#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
int main()
{
	char dest4[] = "123456789";
	ft_memcpy(dest4 + 1, dest4, 10);
	printf("dest4: %s\n", dest4);
}