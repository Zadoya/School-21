#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int		get_next_line(const int fd, char **line)
{
    char        *buff = NULL;
    static char *str[FD_MAX];
    int         err = 0;

    while (err = (ft_gets_fd(fd, &buff, BUFF_SIZE - 1)))
    {
        if (err == -1)
        {
            free(str[fd]);
            str[fd] = NULL;
            return(err);
        }
        str[fd] = ft_strjoin(str[fd], buff);
    }
    *line = str[fd];
    return(err);
}

int main()
{
    int f;
    char *str;
    int fd;

    if ((fd = open("./file.txt", O_RDONLY)) == -1)
        return(-1);
    f = get_next_line(fd, &str);
    printf("%d   -   %s", f, str);
    return (0);
}