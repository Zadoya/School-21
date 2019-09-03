#include <string.h>
#include <stdio.h>

int     ft_strlen(char *str);

int     main(void)
{
    char *str1 = "";
    char *str2 = "tyfugkjnkb ouh86 t8ugfutug";
    char *str3 = "tyfugkj\0nkb ouh86 t8ugfutug";
    char *str4 = "tyfugkjnkb ouh86 t8ugfutugfdgfgfdgdherhjtgdjthhrgLJHIOLgrp43iy4-0pr вахплиь ъ";
    char str5[10] = "tyfug";
    printf("%d  %lu\n", ft_strlen(str1), strlen(str1));
    printf("%d  %lu\n", ft_strlen(str2), strlen(str2));
    printf("%d  %lu\n", ft_strlen(str3), strlen(str3));
    printf("%d  %lu\n", ft_strlen(str4), strlen(str4));
    printf("%d  %lu\n", ft_strlen(str5), strlen(str5));
}