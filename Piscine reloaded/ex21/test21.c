#include <stdio.h>

int		*ft_range(int min, int max);

int     main(void)
{
    int *rez;
    int a, b;

    /*
    a = -4;
    b = 23;
    rez = ft_range(a,b);
    for (int i = 0; i < (b - a); i++)
        printf("%d = %d\n", i, rez[i]);
    */
    /*
    a = 0;
    b = 9;
    rez = ft_range(a,b);
    for (int i = 0; i < (b - a); i++)
        printf("%d = %d\n", i, rez[i]);
    */
    /*
    a = 5;
    b = 9;
    rez = ft_range(a,b);
    for (int i = 0; i < (b - a); i++)
        printf("%d = %d\n", i, rez[i]);
    */
    /*
    a = -2147483640;
    b = 2147483647;
    rez = ft_range(a,b); //нехватка памяти под массив, проверка на возможность создания
    for (int i = 0; i < (b - a); i++)
        printf("%d = %d\n", i, rez[i]);
    */
    /*
    a = 21;
    b = 21;
    rez = ft_range(a,b);
    printf("%p", rez);
    */
    return(0);
}