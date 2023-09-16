#include "libft.h"

void *ft_memcpy(void *s1, const void *s2, size_t n)
{
    if (!s1 || !s2)
        return (NULL);

    unsigned char *dst;
    const unsigned char *src ;
    size_t i;

    i = 0;
    dst = (unsigned char *)s1;
    src = (const unsigned char *)s2;
    while (i < n)
    {
        dst[i] = src[i];
        i++;
    }
    return (dest);
}
