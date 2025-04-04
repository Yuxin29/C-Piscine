/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:40:26 by yuwu              #+#    #+#             */
/*   Updated: 2025/03/05 19:51:05 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*empty_string(void)
{
	char	*str;

	str = malloc(sizeof(*str));
	*str = '\0';
	return (str);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_total(int size, char **strs, char *sep)
{
	int	total;
	int	count;

	total = 0;
	count = 0;
	while (count < size)
	{
		total += ft_strlen(strs[count]) + ft_strlen(sep);
		count++;
	}
	total -= ft_strlen(sep);
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		x;
	int		y;
	int		j;
	char	*join;

	if (!size)
		return (empty_string());
	join = malloc(ft_total(size, strs, sep) + 1);
	if (join == NULL)
		return (NULL);
	j = 0;
	x = 0;
	while (x < size)
	{
		y = 0;
		while (strs[x][y])
			join[j++] = strs[x][y++];
		y = 0;
		while (x != size - 1 && sep[y])
			join[j++] = sep[y++];
		x++;
	}
	join[j] = '\0';
	return (join);
}
