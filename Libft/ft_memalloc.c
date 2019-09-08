#include "libft.h"

void *ft_memalloc(size_t size)
{
    void *rezult;
    char *ptr;

    if ((rezult = malloc(size)))
    {
        ptr = (char *)rezult;
        while (size-- > 0)
            ptr[size] = 0;
        return (rezult);
    }
    else
        return (NULL);
}