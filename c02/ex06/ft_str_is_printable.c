#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 1 && str[i] <= 31)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main()
{
	printf("%d\n", ft_str_is_printable("adsdsadasda"));
	printf("%d\n", ft_str_is_printable("\n\t\v\f"));
	printf("%d\n", ft_str_is_printable(""));
}
*/
