#include <unistd.h>

void	aff_z(char c);

int		main(void)
{
	char	c;
	c = 'z';
	aff_z(c);
}

void	aff_z(char c)
{
	write(1, &c, 1);
	write(1, "\n", 1);
}

