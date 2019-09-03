#include <stdlib.h>
#include <stdio.h>
int		*ft_range(int min, int max)
{
	int *tab;
	int i;
	int num;

	if (min >= max)
		return (NULL);
	i = 0;
	if ((tab = malloc(sizeof(int) * (max - min))))
	{
		num = min;
		while (num < max)
			tab[i++] = num++;
	}
	return (tab);
}
