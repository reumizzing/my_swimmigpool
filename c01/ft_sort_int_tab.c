#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int		main(void)
{
	int		str[ ] = {9, 6, 5, 3, 2, 1};
	int		size;

	size = 6;
	ft_sort_int_tab(str, size);
	for(int i=0; i<size; i++)
		printf("%d", str[i]);
	return (0);	
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		temp;
	
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
