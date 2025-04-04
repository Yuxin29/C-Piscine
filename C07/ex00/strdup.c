#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup2(char *src)
{
	char	*dup;
	int		i;
	int		len;

	i = 0;
	while (src[i])
		i++;
	len = i + 1;
	i = 0;
	dup = malloc(sizeof(char) * len);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	main(void)
{
	char	str[] = "test";
	char	*du;

	du = ft_strdup2(str);
	printf("%s\n", du);
	free (du);
	return (0);
}
