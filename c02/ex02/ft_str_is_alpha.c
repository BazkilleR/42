#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	
	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
		

	while (str[i] != '\0')
	{	
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') )
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main()
{
	printf("%b\n", ft_str_is_alpha("asdfg"));	
	printf("%b\n", ft_str_is_alpha("asdf_"));				
	printf("%b\n", ft_str_is_alpha(""));				
}
*/
