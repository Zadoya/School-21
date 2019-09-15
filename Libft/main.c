#include "libft.h"
#include <ctype.h>
#include <stdio.h>

char tmp(char s)
{
    return (s);
}

int main(void)
{
    t_list *list = NULL;

    for (int i = 1; i < 10; i++)
    {
      ft_lstadd(&list, ft_lstnew((const void*)&i, sizeof(int)));
    }
    for (int i = 1; i < 10; i++)
    {
      printf("%d, ", (int)list->content);
    }
    return (0);
}