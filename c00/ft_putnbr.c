#include <unistd.h>

void	ft_putnbr(int nb);

int		main(void)
{
	int		nb;

	nb = -710;
	ft_putnbr(nb);
	return (0);
}

void	ft_putnbr(int nb)
{
	unsigned int	n;
	int				i;

	if (nb < 0)
	{
		n = -nb;
		write(1, "-", 1);
	}
	else
		n = nb;
	i = n / 10;
	n = n % 10 + '0';
	if (i > 0) 
		ft_putnbr(i);
	write(1, &n, 1);
}
