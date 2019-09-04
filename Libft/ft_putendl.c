#include "libft.h"

void	ft_putchar(char c);

void	ft_putendl(char *str)
{
	int i;

	i = 0;
    while (str[i])
		ft_putchar(str[i++]);
    ft_putchar('\n');
}