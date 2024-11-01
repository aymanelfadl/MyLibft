#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
int main()
{
	char **res = ft_split(0, '\0');
	if (res == 0)
	{
		printf("ha9e");
		return 0;
	}
	for (size_t i = 0; i < 2; i++)
	{
		printf("%s", res[i]);
	}
}