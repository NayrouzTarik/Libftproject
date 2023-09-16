#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;
    size_t dstlen;
    size_t srclen;
    size_t space_left;

    i = 0;
    j = 0;
    dstlen = ft_strlen(dst);
    srclen = ft_strlen(src);
    space_left = dstsize - dstlen - 1;
    if (dstsize <= dstlen)
        return (dstsize + srclen);
    while (dst[i])
        i++;
    while (src[j] != '\0' && space_left > 0)
    {
        dst[i] = src[j];
        i++;
        j++;
        space_left--;
    }
    dst[i] = '\0';
    return (dstlen + srclen);
}