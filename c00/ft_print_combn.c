#include <unistd.h>

void	ft_print_combn(int n);

int		main(void)
{
	int		n;

	n = 3;
	ft_print_combn(n);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_combn(int nb)
{
	int		ten;
	int		one;

	while (nb > 9)
	{
		ten = nb / 10;
		one = nb % 10;
		if (one > 0)
			ft_put_combn(one);
		ft_putchar(one + '0');
	}
}

void	ft_print_combn(int n)
{
	
}
