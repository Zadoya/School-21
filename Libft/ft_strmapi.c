#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(unsigned int, char))
{
	char 			*new;
	unsigned int	i;

	if (s && (new = ft_memalloc(ft_strlen(s) + 1)))
	{
		i = 0;

		while (*s)
		{
			new[i++] = (*f)(i, *(s++));
		}
		return (new);
	}
	else
		return (NULL);
}