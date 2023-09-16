#include "libft.h"

static int is_in_set(char c, const char *set)
{
    while (*set)
    {
        if (*set == c)
            return 1; // Character found in set
        set++;
    }
    return 0; // Character not found in set
}
char *ft_strtrim(const char *s1, const char *set)
{
    size_t s_len;
    size_t start;
    size_t end;
    size_t size_trim;
    char *dest;

    if (!s1)
        return (NULL);
        
    s_len = ft_strlen(s1);
    start = 0;
    end = s_len - 1;
    while (s1[start] && is_in_set(s1[start], set))
    {
        start++;
    }
    while (end > start && is_in_set(s1[end], set))
    {
        end--;
    }
    size_trim = end - start + 1;
    dest = (char *)malloc(sizeof(char) * (size_trim + 1));
    if (!dest)
        return (NULL);
    ft_strlcpy(dest, &s1[start], size_trim + 1);
    return (dest);
}