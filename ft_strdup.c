#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*res;

	i = 0;
	res = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (res == NULL)
		return (NULL);
	while (s[i])
	{
		res[i] = ((char *)s)[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
