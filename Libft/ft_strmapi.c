#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char 			*new;
	unsigned int	i;

	if (s && (new = ft_memalloc(ft_strlen(s))))
	{
		i = 0;

		while (*s)
		{
			new[i] = (*f)(i, *(s++));
			i++;
		}
		return (new);
	}
	else
		return (NULL);
}