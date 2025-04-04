/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 19:30:15 by yuwu              #+#    #+#             */
/*   Updated: 2025/02/23 19:38:38 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	next_change_or_not;

	i = 0;
	next_change_or_not = 1;
	while (str[i])
	{
		if (next_change_or_not == 1 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (next_change_or_not == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] < '0' || (str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a') || str[i] > 122)
			next_change_or_not = 1;
		else
			next_change_or_not = 0;
		i++;
	}
	return (str);
}
