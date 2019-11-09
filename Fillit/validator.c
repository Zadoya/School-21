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
		if (buf == BLOCK)
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
		if (buf[i] == '#')
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

	i = 0;
	while(i <= size)
	{
		if (block_counter(buf + i) != 4)
			return (0);
		if (touch_counter(buf + 1) != 6 && touch_counter(buf + 1) != 8)
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
	bytecount = read(fd, buf, 545);
	close(fd);
	if (bytecount > 544 || bytecount < 19)
		return (NULL);
	buf[bytecount] = '\0';
	if (!valid(buf, bytecount))
		return (NULL);
	return (makelist(buf, bytecount));
}