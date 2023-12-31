#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t j;
    size_t i;
    char *str;

    if (s == NULL)
        return (NULL);
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    i = 0;
    j = 0;
    while (s[i])
    {
        if (i >= start && j < len)
        {
            str[j] = s[i];
            j++;
        }
        i++;
    }
    str[j] = 0;
    return (str);
}