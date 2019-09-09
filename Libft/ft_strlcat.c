#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int i;
	unsigned int j;

	j = 0;
	i = 0;
	while (dest[i] != '\0' && i < size - 1)
		i++;
	if (i == size - 1)
		return (size + strlen(src));
	while (i < size - 1 && src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (strlen(dest) + strlen(src));
}
