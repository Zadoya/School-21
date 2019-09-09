#include "libft.h"

int		ft_islower(int c)
{
	unsigned char simbol;

	simbol = (unsigned char)c;
	if (simbol >= 'a' && simbol <= 'z')
			return (1);
	return (0);
}