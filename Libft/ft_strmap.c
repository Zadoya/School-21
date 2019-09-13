#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char 			*new;
	unsigned int 	i;

	if (s && (new = ft_memalloc(ft_strlen(s))))
	{
		i = 0;

		while (*s)
		{
			new[i++] = (*f)(*(s++));
		}
		return (new);
	}
	else
		return (NULL);
}