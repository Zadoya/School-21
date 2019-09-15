#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *sub;

	if ((start + len > ft_strlen(s)) || !s)
		return (NULL);
	if (!(sub = ft_strnew(len)))
		return (NULL);
	while (len--)
		sub[len] = s[start + len];
	return (sub);
}