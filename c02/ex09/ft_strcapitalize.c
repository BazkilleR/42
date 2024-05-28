#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] -= 32;
	}

	while (str[i] != '\0')
	{
		if (str[i - 1] == 32)
		{
			str[i] -= 32;
		}
		i++;
	}

	return (str);
}

/* int	main()
{
	char	str[] = "computer science";
	printf("%s\n", ft_strcapitalize(str));
} */
