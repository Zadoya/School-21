#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{

	char *rez;

	rez = dest;
	while (*dest)
		dest++;
	while (*src && n--)
		*(dest++) = *(src++);
	*dest = '\0';
	return (rez);
}
