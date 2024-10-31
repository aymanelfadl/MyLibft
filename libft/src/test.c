#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
int main()
{
	char str[20] = "0123456789\0 1111";
	printf("%s\n", ft_substr(str, 12, 4));
}