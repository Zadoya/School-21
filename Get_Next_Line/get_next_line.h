/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeckhard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 13:57:31 by jeckhard          #+#    #+#             */
/*   Updated: 2019/10/02 13:57:32 by jeckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 9999
# define FD_MAX 2147483647

# include "libft/libft.h"

typedef struct  s_line
{
    int             fd;
    char            *content;
    size_t          content_size;
    struct s_line   *next;
}               t_line;

int             get_next_line(const int fd, char **line);
int             gnl(const int fd, char **line);

#endif
