/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeckhard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 21:26:20 by jeckhard          #+#    #+#             */
/*   Updated: 2019/09/15 21:26:21 by jeckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isdigit(int c)
{
    unsigned char digit;

    digit = (unsigned char)c;
	if (digit >= '0' && digit <= '9')
			return (1);
	return (0);
}
