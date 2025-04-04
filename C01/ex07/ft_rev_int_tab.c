/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 19:51:36 by yuwu              #+#    #+#             */
/*   Updated: 2025/02/23 14:57:05 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	count_reverse;
	int	mid;

	count = 0;
	count_reverse = size - 1;
	while (count <= count_reverse)
	{
		mid = tab[count];
		tab[count] = tab[count_reverse];
		tab[count_reverse] = mid;
		count++;
		count_reverse--;
	}
}
