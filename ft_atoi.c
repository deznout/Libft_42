#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sgn;

	i = 0;
	sgn = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sgn = -sgn;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * sgn);
}
