#include "libft.h"

static int memory(int n, int counter)
{
	unsigned int tmp;

	if (n < 0)
	{
		counter++;
		tmp = -n;
	}
	else
		tmp = n;
	while (tmp > 0)
	{
		tmp = tmp / 10;
		counter++;
	}
	return (counter);
}

static char *nbr(int n, int counter)
{
	char *num;
	unsigned int tmp;
	
	if ((num = (char *)malloc(sizeof(char) * (counter + 1))))
	{
		num[counter--] = '\0';
		if (n < 0)
			tmp = -n;
		else
			tmp = n;
		while (tmp > 0)
		{
			num[counter] = tmp % 10 + '0';
			tmp = tmp / 10;
			counter--;
		}
		if (counter == 0)
			num[0] = '-';
	}
	else
		return (NULL);
	return(num);
}

char	*ft_itoa(int n)
{
	int counter;

	counter = 0;
	counter = memory(n, counter);
	if (counter == 0)
    	return ("0\0");
	return (nbr(n, counter));
}