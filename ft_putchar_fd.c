#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1); //fd = file discription (0 = output) (1 = input) (2 = errors)
}