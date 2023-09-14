#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;
    size_t dstlen;
    size_t srclen;
    size_t space_left;

    i = 0;
    j = 0;
    dstlen = ft_strlen(dst);
    srclen = ft_strlen(src);
    space_left = dstsize - dstlen - 1;
    if (dstsize <= dstlen)
        return (dstsize + srclen);
    while (dst[i])
        i++;
    while (src[j] != '\0' && space_left > 0)
    {
        dst[i] = src[j];
        i++;
        j++;
        space_left--;
    }
    dst[i] = '\0';
    return (dstlen + srclen);
}


/*int main()
{
    char dst[20] = "Hello";
    char src[] = " World!";
    size_t dstsize = 20;
    size_t result = ft_strlcat(dst, src, dstsize);
    printf("Resulting string: \"%s\"\n", dst);
    printf("Return value: %zu\n", result);

    char dst2[5] = "Hello";
    char src2[] = " World!";
    size_t dstsize2 = 5;
    size_t result2 = ft_strlcat(dst2, src2, dstsize2);
    printf("Resulting string: \"%s\"\n", dst2);
    printf("Return value: %zu\n", result2);

    char dst3[20] = "Hello";
    char src3[] = "";
    size_t dstsize3 = 20;
    size_t result3 = ft_strlcat(dst3, src3, dstsize3);
    printf("Resulting string: \"%s\"\n", dst3);
    printf("Return value: %zu\n", result3);

    char dst4[20] = "";
    char src4[] = " World!";
    size_t dstsize4 = 20;
    size_t result4 = ft_strlcat(dst4, src4, dstsize4);
    printf("Resulting string: \"%s\"\n", dst4);
    printf("Return value: %zu\n", result4);

    char dst5[11] = "Hello";
    char src5[] = " World!";
    size_t dstsize5 = 11;
    size_t result5 = ft_strlcat(dst5, src5, dstsize5);
    printf("Resulting string: \"%s\"\n", dst5);
    printf("Return value: %zu\n", result5);

    return 0;
}*/