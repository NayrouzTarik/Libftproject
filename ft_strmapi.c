# include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t s_len;
    size_t i;
    char *str;

    s_len = ft_strlen(s);
    str = (char *)malloc(sizeof(char) * (s_len + 1));
    if (!str)
        return (NULL);
    i = 0;
    while (i < s_len)
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}