/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeckhard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 23:30:09 by jeckhard          #+#    #+#             */
/*   Updated: 2019/07/09 13:01:38 by jeckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int	j;
	int diff;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		diff = 0;
		if (str[i] == to_find[j])
		{
			while (to_find[j + 1] != '\0')
			{
				j++;
				if (str[i + j] != to_find[j])
					diff++;
			}
			if (diff == 0)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
