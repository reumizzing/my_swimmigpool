#include <stdio.h>

int		ft_strlen(char *str);

int		main(void)
{
	char	ptr[ ] = "my name is pureum";
	printf("length of str is %d", ft_strlen(ptr));
	return (0);	
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}
