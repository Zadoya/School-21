#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
    size_t i;
    i = ft_strlen(s) + 1;
    s = &s[i];
	while (s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
	}
	return (NULL);
}