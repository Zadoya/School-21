#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return(i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	if (!(dest = malloc(ft_strlen(src) + 1)))
		return (NULL);
	else while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}