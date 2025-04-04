/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 16:38:23 by yuwu              #+#    #+#             */
/*   Updated: 2025/03/11 16:10:14 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap2(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 > *s2)
		return (-1);
	return (0);
}

int	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
	return (0);
}

int	main(int ac, char **av)
{
	int	t;
	int	c;

	t = 0;
	c = 1;
	while (t < ac -1)
	{
		c = 1;
		while (c < ac - 1)
		{
			if (ft_strcmp(av[c], av[c + 1]) < 0)
				ft_swap2(&av[c], &av[c + 1]);
			c++;
		}
		t++;
	}
	c = 1;
	while (c <= ac - 1)
	{
		ft_putstr(av[c]);
		c++;
	}
	return (0);
}
