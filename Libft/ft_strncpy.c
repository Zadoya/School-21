#include "libft.h"

char    *ft_strncpy(char *dest, const char *src, size_t len)
{
    char *rez;

    rez = dest;
    while (*src && len)
    {
	    *(dest++) = *(src++);
		len--;
	}
	if (!len)
        *dest = '\0';
    else
        ft_bzero(dest, len);
    return (rez);
}