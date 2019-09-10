#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t diff;
	char *first_rez;
	char *first_n;

	first_n = (char *)needle;
	if (!*needle)
		return ((char *)haystack);
	while (*haystack)
	{
		needle = first_n;
		diff = 0;
		if (*haystack == *needle)
		{
			first_rez = (char *)haystack;
			while (*(++needle))
			{
				if (*(++haystack) != *needle)
					diff++;
			}
			if (diff == 0)
				return (first_rez);
			haystack = first_rez; 
		}
		haystack++;
	}
	return (NULL);
}