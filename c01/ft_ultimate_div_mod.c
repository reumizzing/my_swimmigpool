#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int		div;
	int		mod;

	div = 64;
	mod = 3;
	ft_ultimate_div_mod(&div, &mod);
	printf("a = %d, b = %d", div, mod);
	return (0);
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}
