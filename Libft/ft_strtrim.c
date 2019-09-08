#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char *new;
	int i;

	i = 0;
	if (!s || !(new = (char *)ft_memalloc(sizeof(s) + 1)))
		return (NULL);
	while (*s)
	{
		while (*s != ' ' || *s != '\n' || *s != '\t' || *s)
			new[i++] = *(s++);
		while (*s == ' ' || *s == '\n' || *s == '\t' || *s)
			s++;
	}
	return(new);
}