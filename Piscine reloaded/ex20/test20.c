#include <stdio.h>
#include <string.h>

char    *ft_strdup(char *src);

int     main()
{
    char *s1 = "asdfghj";

    printf("%s\n%s", strdup(s1), ft_strdup(s1));
    return(0);
}