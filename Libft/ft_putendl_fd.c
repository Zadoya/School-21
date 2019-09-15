#include "libft.h"

void	ft_putendl_fd(char const *str, int fd)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar_fd(str[i++], fd);
	ft_putchar_fd('\n', fd);
}