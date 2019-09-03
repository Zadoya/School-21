#include "mylib.h"

int		display_file(char *file)
{
	char buf[BUF_SIZE + 1];
	int i;
	int fd;

	if ((fd = open(file, O_RDONLY)) == -1)
	{
		ft_putstr("open() error.\n");
		return(1);
	}	
	else while ((i = read(fd, buf, BUF_SIZE)))
		{	
			buf[i] = '\0';
			ft_putstr(buf);
		}
	if (close(fd) == -1)
	{
		ft_putstr("close error.\n");
		return(1);
	}
	return (0);
}

int main(int ac, char **av)
{
	if (ac == 1)
		ft_putstr("File name missing.\n");
	else if (ac > 2)
		ft_putstr("Too many arguments.\n");
	else
		return (display_file(av[1]));
	return (0);
}
