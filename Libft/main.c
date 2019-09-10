#include "libft.h"
#include <ctype.h>
#include <stdio.h>

char tmp(char s)
{
    return (s);
}

int main(void)
{


	//const unsigned char str[] = "1345676876867";
	//char copy[] = "fdyttkmhg";
	//printf("%s\n", memmove(copy, str, 12));
	//printf("%s", ft_memmove(copy, str, 12));

	//printf("%d", ft_atoi_b("ffa3f",16));

    //printf("%s\n", strnstr("frregehd","reg",4));
    //printf("%s\n", ft_strnstr("frregehd","reg",4));

    //char *c = malloc(10), *d;// = malloc(10);
    
    //unsigned char *c;
    //const char *h = "sd1yfgvhltfjghkjkbkj";
    //d = ft_strncpy(c, "dfg", 13);
    //printf("%s\n", d);//ft_strcpy(c, "ugjhk"));
    //d = strncpy(c, "dfg", 13);
    //printf("%s\n", d);
    //return (0);
    //printf("%s", strcpy(c, ""));
      //printf("%s ",i);
    //*/
    //int i;
    //int *s[5];
    //int *str;
    /*
    str = (int *)memset(s, 300,20);
    for (int i = 0; i < 5 ; i++)
      printf("%d ",str[i]);
    printf("\n");
    for (int i = 0; i < 5 ; i++)
      s[i] = 0;
    str = (int *)ft_memset(s, 300,20);
    for (int i = 0; i < 5 ; i++)
      printf("%d ",str[i]);
    */
    //for (int j = 0; j < 5; j++)
    //    str[j] = 'a';
    //bzero(str, 3);
    //ft_bzero(str, 2);
    //for (int j = 0; j < 5; j++)
    //    ft_putchar(str[j]);
    /*
    i = (int *)ft_memalloc(sizeof(int) * 5);
    for (int j = 0; j < 6; j++)
    {
        ft_putnbr(i[j]);
        ft_putchar(' ');
    }*/
    
    //str = ft_strnew(5);
    /*for (int j = 0; j < 6; j++)
    {
        ft_putchar(str[j]);
        ft_putchar('a');
    }
    
    ft_strdel(&str);
    if (str == NULL)
        ft_putchar('X');
    else
        ft_putchar('Y');
    */
    /*for (int j = 0; j <= 4; j++)
        str[j] = 'a';
    ft_strclr(str);
    for (int j = 0; j <= 4; j++)
    {
        ft_putchar(str[j]);
        ft_putchar('a');
    }*/
    //ft_putstr(ft_strmap(str, tmp));
    /*
    i = ft_strnequ("12346","12346",10);
    ft_putnbr(i);*/
    //ft_putstr(ft_strsub("123456789", 3, 4));
    //char *str = NULL;
    //ft_putstr(ft_strjoin("12345", str));
    //ft_putstr(ft_strjoin("", "6789\n"));
    //ft_putstr(ft_strjoin("12345", "6789"));
    printf("%s", ft_strtrim("    jefjl  k f jfk k  ff    "));
    return (0);
}