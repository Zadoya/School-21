#include "libft.h"

int		ft_isprint(int c)
{
    unsigned char simbol;

    simbol = c;
	if (simbol >= 32 && simbol <= 126)
			return (1);
	return (0);
}