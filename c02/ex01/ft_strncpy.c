#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[n] = '\0';
	return (dest);
}
/*
int	main()
{
	char	src[20] = "Hello, world";
	char	dest[20];

	printf("%s\n", ft_strncpy(dest, src, 8));
	return (0);
}
*/
