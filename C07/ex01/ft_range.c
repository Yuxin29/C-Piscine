/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 20:44:33 by yuwu              #+#    #+#             */
/*   Updated: 2025/03/05 18:34:15 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
		return (NULL);
	i = 0;
	array = malloc((max - min) * 4);
	if (array == NULL)
		return (NULL);
	while (min + i < max)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
