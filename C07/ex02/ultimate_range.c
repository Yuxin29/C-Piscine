#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	c;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	c = 0;
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (!arr)
		return (-1);
	while (min + c < max)
	{
		arr[c] = min + c;
		c++;
	}
	*range = arr;
	return (c);
}

int	main(void)
{
	int	r;
	int	*ar;
	int	j;

	r = ft_ultimate_range(&ar, 3, 9);
	printf("%i\n", r);
	while (ar[j])
	{
		printf("%i\n", ar[j]);
		j++;
	}
	return (0);
}
