#include <unistd.h>

void	ft_print_comb2(void);

int		main(void)
{
	ft_print_comb2();
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_comb(int nb)
{
	int		first;
	int		second;

	if (nb > 9)
	{
		first = nb / 10;
		second = nb % 10;
		ft_putchar(first + '0');
		ft_putchar(second + '0');
	}
	else
	{
		ft_putchar('0');
		ft_putchar(nb + '0');
	}
}

void	ft_print_comb2(void)
{
	int		i;
	int		n;

	i = 0;
	while (i <= 99)
	{
		n = i + 1;
		while (n <= 99)
		{
			ft_put_comb(i);
			ft_putchar(' ');
			ft_put_comb(n);
			if (i < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			++n;
		}
		++i;
	}
}
