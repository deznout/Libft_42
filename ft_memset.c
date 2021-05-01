#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*res;

	res = (char *)s;
	i = 0;
	while (i < n)
	{
		res[i] = (char)c;
		i++;
	}
	return (res);
}
