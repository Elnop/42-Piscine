/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperroti <lperroti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:19:48 by lperroti          #+#    #+#             */
/*   Updated: 2022/10/03 14:51:42 by lperroti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	n;

	n = nb;
	while (power > 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	else
		return (n);
}
/*
int	main(void)
{
	printf("%d\n", ft_recursive_power(5, 2));
	return (0);
}*/
