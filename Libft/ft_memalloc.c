#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *rezult;

	if (!(rezult = malloc(size)))
		return (NULL);
	ft_bzero(rezult, size);
	return (rezult);
}