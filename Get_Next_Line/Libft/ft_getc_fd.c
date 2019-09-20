#include "libft.h"

int		ft_getchar_fd(int fd)
{
	unsigned char	c;
	int				re;

	if ((re = read(fd, &c, 1)))
		return (c);
	else
		return (re);
}
