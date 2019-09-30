#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int		get_next_line(const int fd, char **line)
{
	char		buff[BUFF_SIZE + 1];
	static char	*str[FD_MAX];
	int			err;
	char		*new_line;
	char		*tmp;

	err = 0;
	if (fd < 0 || !line || (!str[fd] && !(str[fd] = ft_strnew(1))))
		return (-1);
	while (!ft_strchr(str[fd], '\n') && (err = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[err] = '\0';
		tmp = str[fd];
		str[fd] = ft_strjoin(str[fd], buff);
		ft_strdel(&tmp);
	}
	if (err == 0 && !*str[fd])
	{
		ft_strdel(&str[fd]);
		return (err);
	}
	if (err == 0 && !ft_strchr(str[fd], 10))
	{
		*line = strdup(str[fd]);
		ft_strdel(&str[fd]);
		//str[fd] = str[strlen(str[fd])];
		return(1);
	}
	if ((new_line = ft_strchr(str[fd], 10)))
	{
		*line = ft_strdup(ft_strsub(str[fd], 0, ft_strlen(str[fd]) - ft_strlen(new_line)));
		ft_strdel(&str[fd]);
		str[fd] = strdup(++new_line);
		//str[fd] = ++new_line;
		return (1);
	}
	return (err);
}

/*int main()
{
	int f;
    char *str;
    int fd;
    if ((fd = open("Tests/file.txt", O_RDONLY)) == -1)
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
/*
int				main(void)
{
	char		*line;
	int			fd;
	int			ret;
	int			count_lines;
	char		*filename;
	int			errors;

	filename = "Tests/gnl7_2.txt";
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
			if (count_lines == 1 && strcmp(line, "abcdefgh") != 0)
				errors++;
			count_lines++;
			if (count_lines > 50)
				break ;
		}
		close(fd);
		if (count_lines != 2)
			printf("-> must have returned '1' twice instead of %d time(s)\n", count_lines);
		if (errors > 0)
			printf("-> must have read \"1234567\" and \"abcdefgh\"\n");
		if (count_lines == 2 && errors == 0)
			printf("OK\n");
	}
	else
		printf("An error occured while opening file %s\n", filename);
	return (0);
}
*/