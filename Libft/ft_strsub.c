#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *sub;

	if ((start + len > ft_strlen(s)) || !s || len == 0)
		return (NULL);
	if (!(sub = (char *)ft_memalloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (len--)
		sub[len] = s[start + len];
	return (sub);
}