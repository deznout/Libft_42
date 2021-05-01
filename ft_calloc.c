#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	mem = (void *)malloc(size * count);
	if (!mem)
		return (NULL);
	ft_bzero(mem, size * count);
	return (mem);
}
