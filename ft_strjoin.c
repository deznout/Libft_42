#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		k;
	char	*res;
	size_t	lenS1;
	size_t	lenS2;

	i = 0;
	k = 0;
	if (!s1 || !s2)
		return (NULL);
	lenS1 = ft_strlen(s1);
	lenS2 = ft_strlen(s2);
	res = (char *)malloc(sizeof(char) * ((int)(lenS1 + lenS2)));
	if (!res)
		return (NULL);
	while (i < (int)lenS1)
	{
		res[i] = s1[i];
		i++;
	}
	while (k < (int)lenS2)
		res[i++] = s2[k++];
	res[i] = '\0';
	return (res);
}
