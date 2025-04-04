/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 19:50:04 by yuwu              #+#    #+#             */
/*   Updated: 2025/02/28 19:57:52 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	div;

	div = nb - 1;
	if (nb <= 1)
		return (0);
	while (div > 1)
	{
		if (nb % div == 0)
			return (0);
		div--;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	next;

	next = nb;
	if (nb < 2)
		return (2);
	while (next < 2147483647)
	{
		if (ft_is_prime(next))
			return (next);
		next++;
	}
	return (0);
}
