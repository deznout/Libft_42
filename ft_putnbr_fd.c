#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	char	str[12];
	int		i;

	num = n;
	i = 0;
	if (num == 0)
		write(fd, "0", 1);
	if (num < 0)
	{
		write(fd, "-", 1);
		num = -num;
	}
	while (num > 0)
	{
		*(str + i) = num % 10 + 48;
		num = num / 10;
		i++;
	}
	i--;
	while (i >= 0)
		write(fd, &(str[i--]), 1);
}
