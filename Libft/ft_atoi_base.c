/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeckhard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 21:40:22 by jeckhard          #+#    #+#             */
/*   Updated: 2019/09/15 21:40:24 by jeckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		digits(const char *str, int number, int i, int znak, unsigned char base)
{
	while ((str[i] != '\0') && ((str[i] == '\t') || (str[i] == '\v') ||
			(str[i] == '\n') || (str[i] == ' ') || (str[i] == '\r') ||
			(str[i] == '\f')))
		i++;
	if ((str[i] == '+') && (str[i + 1] >= '0') && (str[i + 1] <= '9'))
		i++;
	else if ((str[i] == '-') && (str[i + 1] >= '1') && (str[i + 1] <= '9'))
	{
		i++;
		znak++;
	}
	else if ((str[i + 1] <= '0') && (str[i + 1] >= '9'))
		return (0);
	if (base >= 1 && base <= 9)
        while ((str[i] >= '0') && (str[i] < base + '0'))
		{
            number = base * number + (str[i] - '0');
		    i++;
        }
    else
    {
        while (((str[i] >= '0') && (str[i] < base + '0')) ||
                (str[i] >= 'a' && str[i] <= (86 + base)))
        {
            if (str[i] >= 1 && str[i] <= '9')
            {
                number = base * number + (str[i] - '0');
		        i++;
            }
            if (str[i] >= 'a')
            {
                number = base * number + (str[i] - 'a' + 10);
		        i++;
            }
        }
	}
	if (znak > 0)
		return (-number);
	return (number);
}

int		ft_atoi_b(const char *str, unsigned char base)
{
	int i;
	int znak;
	int number;

	number = 0;
	znak = 0;
	i = 0;
    if (base > 1 && base <= 16)
	    return (digits(str, number, i, znak, base));
    return (0);
}
