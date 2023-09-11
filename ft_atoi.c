# include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int signe;
    int res;

    i = 0;
    signe = 1;
    res = 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }
    if (str[i] == '-')
    {
        signe = -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
            res = (res * 10) + str[i] - '0';
        else
            break;
        i++;
    }
    return (res * signe);
}