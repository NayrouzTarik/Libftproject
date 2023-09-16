#include "libft.h"

void *ft_memmove(void *s1, const void *s2, size_t n)
{
    unsigned char	*dest;
	unsigned char	*src;
	size_t	i;

	dest = (unsigned char *)s1;
	src = (unsigned char *)s2;
	i = 0;
    if (!dst || !src)
		return (NULL);
    if (dest > src)
    { 
        while (n-- > 0) 
            dest[n] = src[n];
    }  
    else 
    {
        while (i < n)
        {
            dest[i] = src [i];
            i++;
        }
    }
    return (dest);
}
