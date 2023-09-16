#include "libft.h"

static int count_word(char *s, char c)
{
    int wc = 0;
    int i = 0;

    while (s[i] == c && s[i])
        i++;
    while (s[i])
    {
        if (s[i] != c) 
        {
            wc++;
            while (s[i] != c && s[i])
            {
                i++;
            }
        } 
        else 
        {
            while (s[i] == c && s[i])
            {
                i++;
            }
        }
    }

    return wc;
}

static size_t	word_len(char *str, char sep)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != sep)
		i++;
	return (i);
}

static void ft_cleaner(char **buffer)
{
    size_t i;

    i = 0;
    if (buffer == NULL)
        return;
    while (buffer[i] != NULL)
    {
        free(buffer[i]);
        i++;
    }
    free (buffer);
}

static char	**alloc_for_words(char *s, char c, char **res)
{
    int wc; 
    int wl; 
    int i;

    i = 0;
    while (s[i] == c && s[i]) /
        i++;
    wc = 0; // This variable will keep track of the number of words found in the input string.
    while (s[i])
    {
        wl = word_len(&s[i],c); 
        res[wc] = ft_substr(s, i, wl);
        if (!res)
            return (ft_cleaner(res), NULL);
        i = i + wl;
        while (s[i] == c && s[i])
            i++;
        wc++; 
    }
    res[wc] = NULL;
    return (res);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**res;
	char	*target;

	if (!s)
		return (NULL);
	target = (char *)s;
	i = count_word(target, c);
	res = (char **)ft_calloc((i + 1), sizeof(char *));
	if (!res)
		return (NULL);
	alloc_for_words(target, c, res);
	return (res);
}