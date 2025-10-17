#include <unistd.h>

unsigned long	ft_atoi_strict(const char *str)
{
	int		i;
	unsigned long	result;

	result = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\f')
		i++;
	if (str[i] == 0)
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (str[i] != '\0')
		return (0);
	return (result);
}
