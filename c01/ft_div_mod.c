#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int		a;
	int		b;
	int		div;
	int		mod;

	a = 42;
	b = 8;
	ft_div_mod(a, b, &div, &mod);
	printf("div is %d and mod is %d", div, mod);
	return (0);
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
