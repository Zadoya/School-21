include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int number;
	
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		number = (unsigned int)(-n);
	}
	else
	{
		number  = (unsigned int)n;
	}
	if (number >= 0)
		ft_putnbr_fd(number / 10, fd);
	ft_putchar_fd((char)(number % 10 + '0'), fd);
}