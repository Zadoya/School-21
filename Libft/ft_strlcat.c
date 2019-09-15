/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeckhard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 21:35:22 by jeckhard          #+#    #+#             */
/*   Updated: 2019/09/15 21:35:24 by jeckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int i;
	unsigned int j;

	j = 0;
	i = 0;
	while (dest[i] != '\0' && i < size - 1)
		i++;
	if (i == size - 1)
		return (size + ft_strlen(src));
	while (i < size - 1 && src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(src));
}
