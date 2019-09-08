#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *tmp_dst;
	const unsigned char *tmp_src;

	tmp_dst = dst;
	tmp_src = src;
	while (n--)
		*(tmp_dst++) = *(tmp_src++);
	return (dst);
}