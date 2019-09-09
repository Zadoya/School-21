#include "libft.h"

int		ft_isascii(int c)
{
	unsigned char simbol;

    simbol = c;
	if (simbol >= 0 && simbol <= 127)
			return (1);
	return (0);
}