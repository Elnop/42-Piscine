/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperroti <lperroti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 01:12:30 by lperroti          #+#    #+#             */
/*   Updated: 2022/10/03 14:51:04 by lperroti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("Prime to check: %d\nNext prime: %d\n", 12, ft_find_next_prime(12));
	printf("-------------------\n");
	printf("Prime to check: %d\nNext prime: %d\n", 25, ft_find_next_prime(25));
	printf("-------------------\n");
	printf("Prime to check: %d\nNext prime: %d\n", 54, ft_find_next_prime(54));
	return (0);
}
*/