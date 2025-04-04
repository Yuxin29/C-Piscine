/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 21:01:43 by yuwu              #+#    #+#             */
/*   Updated: 2025/03/03 21:24:22 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	m;
	int	count;
	int	temp;

	m = 0;
	count = 1;
	while (count <= size)
	{
		while (m < (size - 1))
		{
			if (tab[m] > tab[m + 1])
			{
				temp = tab[m];
				tab[m] = tab[m + 1];
				tab[m + 1] = temp;
			}
			m++;
		}
		count++;
		m = 0;
	}
}
