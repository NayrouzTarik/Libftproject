# include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
    size_t i;
    size_t j;
    size_t len_s1;
    size_t len_s2;
    char *str;

    len_s1 = ft_strlen(s1);
    len_s2 = ft_strlen(s2);
    if (!s1 || !s2)
		return (NULL);
    str = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
    if (!str)
        return (NULL);
    i = 0;
    j = 0; 
    while (i < len_s1)
    {
        str[j] = s1[i];
        i++;
        j++;
    }
    i = 0;
    while (i < len_s2)
    {
        str[j] = s2[i];
        i++;
        j++;
    }
    str[j] = '\0';
    return (str);
}