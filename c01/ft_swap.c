#include <unistd.h>
#include <stdio.h>

void	ft_swap(int	*a, int *b);

int		main(void)
{
	int		a;
	int		b;

	a = 4;
	b = 8;
	ft_swap(&a, &b);
	printf("%d\n", a);
	printf("%d", b);
	return (0);
}

void	ft_swap(int	*a, int	*b)
{
	int		temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
