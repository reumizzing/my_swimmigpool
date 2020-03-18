#include <unistd.h>

void	ft_print_comb(void);

int		main(void)
{
	ft_print_comb();
	return (0);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	b = '1';
	c = '2';

	while (c <= '9' && a <= '7')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		if (a != '7')
			write(1, ", ", 2);
		c++;
		if 	(c > '9')
		{
			b++;
			c = b + 1;
		}
		if (c > '9' && b > '8')
		{
			a++;
			b = a + 1;
			c = b + 1;
		}
	}
}
