/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeckhard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 13:57:12 by jeckhard          #+#    #+#             */
/*   Updated: 2019/10/02 13:57:56 by jeckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*reading(char **str, int *err, int fd)
{
	char	buff[BUFF_SIZE + 1];
	char	*tmp;

	while (!(ft_strchr(*str, '\n')) && (*err = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[*err] = '\0';
		tmp = *str;
		*str = ft_strjoin(*str, buff);
		ft_strdel(&tmp);
	}
	return (*str);
}

int			get_next_line(const int fd, char **line)
{
	static char	*str[FD_MAX];
	int			err;
	char		*new_line;

	err = 0;
	if (fd < 0 || !line || (!str[fd] && !(str[fd] = ft_strnew(1))))
		return (-1);
	str[fd] = reading(&str[fd], &err, (int)fd);
	if (!*str[fd] || err == -1)
	{
		ft_strdel(&str[fd]);
		return (err == -1 ? -1 : 0);
	}
	else if (err == 0 && !(new_line = ft_strchr(str[fd], '\n')))
	{
		*line = ft_strdup(str[fd]);
		ft_strdel(&str[fd]);
	}
	else if ((new_line = ft_strchr(str[fd], '\n')))
	{
		*line = ft_strsub(str[fd], 0, ft_strlen(str[fd]) - ft_strlen(new_line));
		ft_strdel(&str[fd]);
		str[fd] = ft_strdup(++new_line);
	}
	return (1);
}
