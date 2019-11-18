#include "fillit.h"

int 	block_counter(char *buf)
{
	int i;
	int count;
	
	count = 0;
	i = 0;
	while(i < 19)
	{
		if (buf[i] && buf[i] != '\n' && buf[i] != BLOCK && buf[i] != EMPTY)
			return(0);
		if (buf[i] == '\n' && (i + 1) % 5 != 0)
			return (0);
		if (buf[i] == BLOCK)
			count++;
		i++;
	}
	if (!buf[i] || buf[i] != '\n')
		return (0);
	return (count);
}


int		touch_counter(char *buf)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (i < 19)
	{
		if (buf[i] == BLOCK)
		{
			if (i + 1 <= 18 && buf[i + 1] == '#')
				count++;
			if (i - 1 >= 0 && buf[i - 1] == '#')
				count++;
			if (i + 5 <= 18 && buf[i + 5] == '#')
				count++;
			if (i - 5 >= 0 && buf[i - 5] == '#')
				count++;
		}
		i++;
	}
	return (count);
}

int		valid(char *buf, int size)
{
	int		i;
	int		touches;
	i = 0;
	while(i <= size)
	{
		if (block_counter(buf + i) != 4)
			return (0);
		touches = touch_counter(buf + i);
		if (touches != 6 && touches != 8)
			return (0);
			i += 21;
	}
	return (1);
}

t_tetr	*validator(char *file)
{
	int		fd;
	char	buf[545];
	int		bytecount;

	fd = open(file, O_RDONLY);
	if ((fd = open("file", O_RDONLY)) == -1)
		return (NULL);
	bytecount = read(fd, buf, 546);
	buf[bytecount] = '\0';
	close(fd);
	if (bytecount > 545 || bytecount <= 19)
		return (NULL);
	if (!valid(buf, bytecount))
		return (NULL);
	return (makelist(buf, bytecount));
}