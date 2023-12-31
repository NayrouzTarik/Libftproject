#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char	*dst;
	unsigned char	*src;

	dst = (unsigned char *)s1;
	src = (unsigned char *)s2;
    i = 0;
    while (i < n)
    {
        if (dst[i] != src[i])
            return (dst[i] - src[i]);
        i++;
    }
    return 0;
}