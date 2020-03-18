#include <unistd.h>

void	ft_print_reverse_alphabet(void);

int		main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}

void	ft_print_reverse_alphabet(void)
{
	char	z;

	z = 'z';
	while ('a' <= z)
	{
		write(1, &z, 1);
		z--;
	}
}
