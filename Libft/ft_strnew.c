#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *new;
	if (!(new = (char *)ft_memalloc(size + 1)))
	 	return (NULL);
	return (new);
}