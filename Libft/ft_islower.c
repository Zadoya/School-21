/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeckhard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 21:26:44 by jeckhard          #+#    #+#             */
/*   Updated: 2019/09/15 21:26:47 by jeckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_islower(int c)
{
	unsigned char simbol;

	simbol = (unsigned char)c;
	if (simbol >= 'a' && simbol <= 'z')
		return (1);
	return (0);
}
