#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char	*dest;
	char	*src;
	int		i;

	dest = "good luck";
	src = "to you"
	*ft_strcpy(dest, src);
	return (0);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (dest[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
