/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 18:01:20 by yuwu              #+#    #+#             */
/*   Updated: 2025/02/28 18:07:48 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	sum;

	sum = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	if (nb == 1)
		return (sum);
	else
		return (ft_recursive_factorial(nb - 1) * nb);
}
