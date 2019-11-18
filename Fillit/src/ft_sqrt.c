/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeckhard <jeckhard@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 22:07:15 by jeckhard          #+#    #+#             */
/*   Updated: 2016/08/13 22:07:16 by jeckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int 	ft_sqrt(int nb)
{
	int sqr;

	sqr = 1;
	while ((sqr * sqr) < nb)
		sqr++;
	return (sqr);
}

size_t		tetr_count(t_tetr *list)
{
	size_t		i;

	i = 0;
	while (list != NULL)
	{
		list = list->next;
		i++;
	}
	return(i);
}