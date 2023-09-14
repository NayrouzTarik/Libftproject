#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    size_t overflow;
    
    overflow = count * size;
    if (overflow != 0 && (overflow / count) != size)
        return (NULL);
    void *ptr = malloc(overflow); /*point to memory of any data type (void means an unspecified data type)
                                 and bcs its not specified to a one type of
                                  data we allocate the totalsize aka overflow*/
    if (ptr != NULL)
    {
        ft_bzero(ptr, overflow);
    }
    return (ptr);
}