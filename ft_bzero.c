#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*res;

	res = (char *)s;
	i = 0;
	while (i < n)
	{
		res[i] = 0;
		i++;
	}
}
