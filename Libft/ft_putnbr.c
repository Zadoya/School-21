#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int number;
	
	if (n < 0)
	{
		ft_putchar('-');
		number = (unsigned int)(-n);
	}
	else
	{
		number  = (unsigned int)n;
	}
	if (number >= 0)
		ft_putnbr(number / 10);
	ft_putchar((char)(number % 10 + '0'));
}
