/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeckhard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 21:27:17 by jeckhard          #+#    #+#             */
/*   Updated: 2019/09/15 21:27:18 by jeckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isupper(int c)
{
	unsigned char simbol;

	simbol = (unsigned char)c;
	if (simbol >= 'A' && simbol <= 'Z')
		return (1);
	return (0);
}
