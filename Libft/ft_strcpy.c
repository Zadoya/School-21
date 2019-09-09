#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
    char *rez;

    rez = dest;
	while (1)
	{
		*dest = *(src++);
		if (*(dest++) == '\0')
			return (rez);
	}
}
