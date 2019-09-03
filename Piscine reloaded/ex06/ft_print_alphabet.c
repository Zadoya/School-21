#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char i;
	
	i = 0;
	while (i < 26)
	{
		ft_putchar('a' + i);
		i++;
	}
}