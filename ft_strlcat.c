#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*s;
	size_t	lenD;
	size_t	res;
	size_t	lenS;
	size_t	i;

	s = (char *)src;
	lenD = ft_strlen(dst);
	lenS = ft_strlen(s);
	res = 0;
	i = 0;
	if (size > lenD)
		res = lenS + lenD;
	else
		res = lenS + size;
	while (s[i] != '\0' && (lenD + 1) < size)
	{
		dst[lenD] = s[i];
		lenD++;
		i++;
	}
	dst[lenD] = '\0';
	return (res);
}
