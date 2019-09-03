#include <string.h>
#include <stdio.h>

int     ft_strcmp(char *s1, char *s2);

int     main(void)
{
    char *s1 = "qwert";
    char *s2 = "qwert";
    char *s3 = "qwertyutrtr";
    char *s4 = "qwer";
    
    printf("%d  %d\n", ft_strcmp(s1, s2), strcmp(s1, s2));
    printf("%d  %d\n", ft_strcmp(s1, s3), strcmp(s1, s3));
    printf("%d  %d\n", ft_strcmp(s1, s4), strcmp(s1, s4));
}