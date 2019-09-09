#include "libft.h"

int		ft_isupper(int c)
{
	unsigned char simbol;

	simbol = (unsigned char)c;
	if (simbol >= 'A' && simbol <= 'Z')
			return (1);
	return (0);
}