#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_ft(int *********nbr);

int		main(void)
{
	int		nbr;

	ft_ultimate_ft(&nbr);
	printf("%d", nbr);
	return (0);
}

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
