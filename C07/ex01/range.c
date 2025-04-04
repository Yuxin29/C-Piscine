#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*ar;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	ar = (int *)malloc(sizeof(int) * (max - min));
	if (!ar)
		return (NULL);
	while (min + i < max)
	{
		ar[i] = min + i;
		i++;
	}
	return (ar);
}

int	main(void)
{
	int	min = -4;
	int	max = 9;
	int	*test;	
	int	j = 0;

	test = ft_range(min, max);
	while (j < 13)
	{
		printf("%d\n", test[j]);
		j++;
	}
	//free (test);
	return (0);
}

/*int	main(void)
{
	int	min = 5;
	int	max = 9;
	int	*test;
	int	i = 0;

	test = ft_range(min, max);
	while (test[i])
	{
		printf("%d\n", test[i]);
		i++;
	}
	return (0);
}*/
