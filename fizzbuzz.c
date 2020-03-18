#include <unistd.h>

void	putnbr(int nb)
{
	int		ten;
	int		one;

	ten = nb / 10;
	one = nb % 10 + '0';
	if (ten > 0)
		putnbr(ten);
	write(1, &one, 1);
}

void	fizzbuzz(int i, int j)
{
	while (i <= j)
	{
		if (i % 3 == 0)
			write(1, "fizz", 4);
		if (i % 5 == 0)
			write(1, "buzz", 4);
		if (!(i % 3 == 0) && !(i % 5 == 0))
			putnbr(i);
		write(1, "\n", 1);
		i++;  
	}
}

int		atoi(char *str)
{
	int i;
	int num;

	i = 0;
	num = 0;
	while (str[i] != 0)
	{
		if (str[i] >= '0' && str[i] <= '9')
			num = num * 10 + str[i] - '0';
		i++;
	}
	return (num);
}

int		main(int argc, char **argv)
{
	int start;
	int end;

	start = 0;
	end = 0;
	if (argc == 3)
	{
		start = atoi(argv[1]);
		end = atoi(argv[2]);
		fizzbuzz(start, end);
	}
	return (0);
}
