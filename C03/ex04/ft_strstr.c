/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 22:07:07 by yuwu              #+#    #+#             */
/*   Updated: 2025/03/12 22:00:24 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	judge;

	if (!(*to_find))
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			i = 0;
			judge = 1;
			while (to_find[i])
			{
				if (to_find[i] != str[i])
					judge = 0;
				i++;
			}
			if (judge == 1)
				return (str);
		}
		str++;
	}
	return ((void *)0);
}
