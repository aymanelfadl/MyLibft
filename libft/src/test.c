#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
int main()
{
	char dest4[10] = "123456789";
	ft_memcpy(dest4, dest4, 2);
	printf("dest4: %s\n", dest4);
}