#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);

	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main()
{
	printf("%b\n", ft_str_is_numeric("123"));
	printf("%b\n", ft_str_is_numeric("123a"));
	printf("%b\n", ft_str_is_numeric(""));
}
*/
