#include "libft.h"

char	*ft_gets_fd(int fd, char *str, size_t len)
{
	int		c;
	size_t	i;

	i = 0;
	if (!(str = ft_strnew(len)))
		return (-1);
	while ((c = ft_getc_fd(fd)) != '\n' && c && c != -1 && i < sizeof(str) || i < len)
		str[i++] = c;
	if (c && c != -1)
	{
		str[i] = '\0';
		return (str);
	}
	else
		return (c);
}