#include "libft.h"

size_t		ft_len(int nb) //calculating the numbers of digit in an integer
{
	int len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb)
	{
		len++;
		nb = nb / 10; //i work with int so any nb bellow 10 after div is equal to 0
	}
	return (len);
}

char		*ft_itoa(int n) //from int to string
{
	int		len;
	char	*str;
	long	nb;

	len = ft_len(n);
	nb = n;
	if (!(str = malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	str[len--] = '\0';
	while (nb)
	{
		str[len] = nb % 10 + '0';
		len--;
		nb = nb / 10;
	}
	return (str);
}