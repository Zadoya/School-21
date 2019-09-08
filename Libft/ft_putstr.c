#include "libft.h"

void	ft_putstr(char const *str)
{
	int i;

	i = 0;
	if (str)
    	while (str[i])
			ft_putchar(str[i++]);
}
