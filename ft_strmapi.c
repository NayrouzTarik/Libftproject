# include "libft.h"

//this fct take 2 arguments a pointer *s and a fct that return a ptr f

/*s hua ptr li bagha nmodifier fih b fct likayna f arg 2 uli endha index dyal ptr s uzid elih ptr dyal dik 
fct so kndkhl b index 0 ttbdl fih b fct kima kant ahia ttkun tatreturni char udkshi knkhbih 
f ptr li allocet lih memory bash returneh  lihua str
the second pointer allocated take the lenght of s since they gonna be the same lenght but with modif inside 
the ptr aka in the index*/
//f is a normal fct wlkn fhad lcase ttwli ttbdl lina index b index wst whd ptr li kaym wst whd fct


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



/*char capitalize(unsigned int i, char c)
{
    (void) i;
    if (c >= 'a' && c <= 'z') {
        return c - 32; // Convert to uppercase
    }
    return c; // Leave other characters unchanged
}
int main()
{
    const char *s = "Hello";
    char *str = ft_strmapi(s, capitalize);

    if (str)
    {
        printf("Original string: %s\n", s);
        printf("Capitalized string: %s\n", str);
        free(str); // Don't forget to free the allocated memory
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/