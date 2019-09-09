#include "libft.h"

int		digits(char *str, int number, int i, int znak)
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
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		number = 10 * number + (str[i] - '0');
		i++;
	}
	if (znak > 0)
		return (-number);
	return (number);
}

int		ft_atoi(char *str)
{
	int i;
	int znak;
	int number;

	number = 0;
	znak = 0;
	i = 0;
	return (digits(str, number, i, znak));
}
