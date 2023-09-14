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

/*ft_memcpy is a function designed to copy raw memory, typically
 used for copying binary data, arrays, or structures.
  It's not meant for handling null-terminated strings
   like functions such as strcpy or strncpy. so no need to add dst[i] = '\0'*/