#include "libft.h"

char	*ft_strdup(const char *src)
{
    int len;
    char *dest;

    len = ft_strlen(src);
    dest = (char *)malloc(sizeof(char) * (len + 1));
    if (!dest)
        return (NULL);
    dest[len] = '\0';
    while (len >= 0)
    {
        dest[len] = src[len];
        len--;
    }
    return (dest);
}