#include "get_next_line.h"

t_line		*ft_lnnew(char *content, size_t content_size, int fd)
{
	t_line *new;

	if (!(new = (t_line *)malloc(sizeof(t_line))))
		return (NULL);
	if (!(new->content = (char *)malloc(content_size))) 
	{
		free(new);
		return (NULL);
	}
	if (content == NULL || content_size == 0)
	{
		new->content = NULL;
		new->content_size = 0;
		new->fd = fd;
		new->next = NULL;
	}
	else
	{
		ft_memcpy(new->content, content, content_size);
		new->content_size = content_size;
		new->fd = fd;
		new->next = NULL;
	}
	return (new);
}

void		ft_lnadd(t_line **alst, t_line *new)
{
	if (alst)
	{
		new->next = *alst;
		*alst = new;
	}
	else
		*alst = new;
}

int			reading(t_line **line, int fd)
{
	char	buff[BUFF_SIZE + 1];
	char	*tmp;
	int		err;

	while (!(ft_strchr((*line)->content, '\n')) && (err = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[err] = '\0';
		tmp = (*line)->content;
		(*line)->content_size += err;
		(*line)->content = ft_strjoin((*line)->content, buff);
		ft_strdel(&tmp);
	}
	return (err);
}

void	ft_lndel(t_line **alst)
{
	t_line *tmp;

	if (alst)
		while (*alst)
		{
			tmp = (*alst)->next;
			ft_lndelone(alst);
			(*alst) = tmp;
		}
}

void	ft_lndelone(t_line **alst)
{
	if (*alst && alst)
	{
		ft_strdel((*alst)->content);
		free(*alst);
		*alst = NULL;
	}
}

int			get_next_line(const int fd, char **line)
{
	int				err;
	char			*new_line;
	t_line			*str;
	static t_line	**head;

	err = 0;
	if (fd < 0 || !line || (!head && (*head = ft_lnnew(ft_strnew(1), 0, (int)fd))))
		return (-1);
	str = *head;
	while (str->fd != fd && str)
		str = str->next;
	if (!str)
		ft_lnadd(head, ft_lnnew(ft_strnew(1), 0, fd));
	str = head;
	reading(str, (int)fd);
	if (!str->content || err == -1)
	{
		ft_lndel(str);
		return (err == -1 ? -1 : 0);
	}
	else if (err == 0 && !(new_line = ft_strchr(str->content, '\n')))
	{
		*line = ft_strdup(str->content);
		ft_strdel(&str[fd]);
	}
	else if ((new_line = ft_strchr(str->content, '\n')))
	{
		*line = ft_strsub(str->content, 0, ft_strlen(str->content) - ft_strlen(new_line));
		ft_strdel(&str[fd]);
		str->content = ft_strdup(++new_line);
	}
	return (1);
}
