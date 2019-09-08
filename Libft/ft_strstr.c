#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char *start;
	const char *first;
	
	first = needle;
	start = haystack;
	while (*haystack || *needle)
	{
		if (*haystack == *needle)
		{
			if (needle == first)
				start = haystack;
			haystack++;
			needle++;
		}
		else if (*haystack != *needle)
		{
			start = NULL;
			needle = first;
			haystack++;
		}
	}
	return((char *)start);
}