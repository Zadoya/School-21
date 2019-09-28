#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int		get_next_line(const int fd, char **line)
{
	char		buff[BUFF_SIZE + 1];
	static char	*str[FD_MAX];
	int			err;
	char		*new_line;

	new_line = str[fd];
	err = 0;
	if (fd < 0 || !line || (!str[fd] && !(str[fd] = ft_strnew(1))))
		return (-1);
	while (!ft_strchr(str[fd], '\n') && (err = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[err] = '\0';
		str[fd] = ft_strjoin(str[fd], buff);
	}
	if (err == 0 && !ft_strchr(str[fd], 10))
	{
		*line = str[fd];
		return(0);
	}
	if ((new_line = ft_strchr(str[fd], 10)))
	{
		str[fd] = ft_strsub(str[fd], 0, ft_strlen(str[fd]) - ft_strlen(new_line) - 1);
		*line = str[fd];
		ft_strcpy(str[fd], ++new_line);
		//str[fd] = ft_strjoin(str[fd], ++new_line);
		//ft_strdel(&new_line);
		return (1);
	}
	//ft_strdel(&str[fd]);
	return (err);
}

/*int		get_next_line(const int fd, char **line)
{
	ssize_t		rdbl;
	char		buff[BUFF_SIZE + 1];
	static char	*str[FD_MAX];
	int			eol;
	char		*tmp;

	if (fd < 0 || (!str[fd] && !(str[fd] = ft_strnew(1))) || !line)
		return (-1);
	while (!ft_strchr(str[fd], '\n') && (rdbl = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[rdbl] = 0;
		tmp = str[fd];
		str[fd] = ft_strjoin(str[fd], buff);
		ft_strdel(&tmp);
	}
	if (rdbl == -1 || !*(tmp = str[fd]))
		return (rdbl == -1 ? -1 : 0);
	if ((eol = !!(ft_strchr(str[fd], '\n'))))
		*line = ft_strsub(str[fd], 0, ft_strchr(str[fd], '\n') - str[fd]);
	else
		*line = ft_strdup(str[fd]);
	str[fd] = ft_strsub(str[fd], (unsigned int)(ft_strlen(*line) + eol), (size_t)(ft_strlen(str[fd]) - (ft_strlen(*line) + eol)));
	ft_strdel(&tmp);
	return (!(!str[fd] && !ft_strlen(*line)));
}*/

/*int main()
{
	int f;
    char *str;
    int fd;
    if ((fd = open("gnl1_1.txt", O_RDONLY)) == -1)
        return(-1);
    f = get_next_line(fd, &str);
    printf("%d   -   %s\n", f, str);
    f = get_next_line(fd, &str);
    printf("%d   -   %s\n", f, str);
    f = get_next_line(fd, &str);
    printf("%d   -   %s\n", f, str);
    f = get_next_line(fd, &str);
    printf("%d   -   %s\n", f, str);
	return (0);
}*/

int				main(void)
{
	char		*line;
	int			fd;
	int			ret;
	int			count_lines;
	char		*filename;
	int			errors;

	filename = "gnl1_2.txt";
	fd = open(filename, O_RDONLY);
	if (fd > 2)
	{
		count_lines = 0;
		errors = 0;
		line = NULL;
		while ((ret = get_next_line(fd, &line)) > 0)
		{
			if (count_lines == 0 && strcmp(line, "1234567") != 0)
				errors++;
			if (count_lines == 1 && strcmp(line, "abcdefg") != 0)
				errors++;
			count_lines++;
			if (count_lines > 50)
				break ;
		}
		close(fd);
		if (count_lines != 2)
			printf("-> must have returned '1' twice instead of %d time(s)\n", count_lines);
		if (errors > 0)
			printf("-> must have read \"1234567\" and \"abcdefg\"\n");
		if (count_lines == 2 && errors == 0)
			printf("OK\n");
	}
	else
		printf("An error occured while opening file %s\n", filename);
	return (0);
}
