/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperroti <lperroti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:48:14 by lperroti          #+#    #+#             */
/*   Updated: 2022/10/03 15:45:28 by lperroti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	n;

	n = 1;
	while (nb > 0)
	{
		n *= nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (n);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(3));
	return (0);
}*/
