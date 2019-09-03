#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
    char i;
	
	i = 0;
	while (i < 10)
	{
		ft_putchar('0' + i);
		i++;
	}
}