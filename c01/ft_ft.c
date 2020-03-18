#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr);

int		main(void)
{
	int		nbr;

	ft_ft(&nbr);
	printf("%d", nbr);
	return (0);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
