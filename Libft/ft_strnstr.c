#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t	diff;
	size_t	rev;
    char	*first_rez;
    char	*first_n;

    first_n = (char *)needle;
    if (!*needle)
        return ((char *)haystack);
    while (*haystack && len--)
    {
        needle = first_n;
        diff = 0;
        if (*haystack == *needle)
        {
            first_rez = (char *)haystack;
			rev = len;
            while (*(++needle) && len--)
            {
                if (*(++haystack) != *needle)
                    diff++;
            }
            if (diff == 0 && !(*needle))
                return (first_rez);
			len = rev;
            haystack = first_rez; 
        }
        haystack++;
    }
    return (NULL);
}