#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (i < len && big[i])
	{
		if (big[i] == little[0])
		{
			k = 1;
			while (little[k] && big[i + k] == little[k] && i + k < len)
				k++;
			if (little[k] == '\0')
				return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}
