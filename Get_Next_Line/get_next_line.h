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

# define BUFF_SIZE 32
# define FD_MAX 2147483647

# include "libft/libft.h"

int		get_next_line(const int fd, char **line);
char	*ft_strchr(const char *s, int c);

#endif
