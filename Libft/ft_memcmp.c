#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
	{
		if (*(const unsigned char *)s1 < *(const unsigned char *)s2)
			return (-1);
		else if (*(const unsigned char *)s1 > *(const unsigned char *)s2)
			return (1);
		s1++;
		s2++;
	}
	return (0);
}