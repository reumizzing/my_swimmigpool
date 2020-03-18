#include <unistd.h>

void	ft_is_negative(int n);

int		main(void)
{
	int		n; 

	n = 18784797;
	ft_is_negative(n);
}

void	ft_is_negative(int n)
{
	char	N;
	char	P;

	N= 'N';
	P = 'P';
	if (n < 0)
		write(1, &N, 1);
	if (n >= 0)
		write(1, &P, 1);
}
