#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int		main(void)
{
	int		str[ ] = {9, 1, 0, 5, 3, 0};
	int		max;

	max = 6;
	ft_rev_int_tab(str, max);
	for (int i = 0; i < 6; i++)
		printf("%d", str[i]);
	return (0);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		temp;

	i = 0;
	size--;
	while(i < size)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		i++;
		size--;
	}	
}
