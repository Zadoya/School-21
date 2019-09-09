#include "libft.h"

int		ft_isdigit(int c)
{
    unsigned char digit;

    digit = (unsigned char)c;
	if (digit >= '0' && digit <= '9')
			return (1);
	return (0);
}