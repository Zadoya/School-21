#include "get_next_line.h"


int		get_next_line(const int fd, char **line)
{
    char        *buff;
    static char *str[FD_MAX];

    while ((buff = ft_gets_fd(fd, buff, BUFF_SIZE -1)))
    {
        if (buff == -1)
        {
            free(str[fd]);
            return(buff);
        }
        str = 
    }
}