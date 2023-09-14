#include "libft.h"

//mem = memory so index becomes blocks of memory like ptr[0] = first byte in the memo
void	*ft_memchr(const void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        if (s[i] == c)
        {
            return ((void *)&s[i]);
        }
        i++;
    }
    return (NULL); 
}