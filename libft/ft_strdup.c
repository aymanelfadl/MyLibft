#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t len;
	char *ptr;
	size_t i;

	len = ft_strlen(s1);
	i = 0;
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	while (i < len)
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}