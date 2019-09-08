#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *new;
	int i;

	i = 0;
	if (!s1 || !s2 || !(new = (char *)ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL); 
	else
	{
		while (*s1)
			new[i++] = *(s1++);
		while (*s2)
			new[i++] = *(s2++);
		return (new);
	}
}