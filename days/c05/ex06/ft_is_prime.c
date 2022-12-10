/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperroti <lperroti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 01:05:39 by lperroti          #+#    #+#             */
/*   Updated: 2022/10/03 14:51:19 by lperroti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i += 1;
	}
	return (1);
}
/*
int	main(void)
{
	printf("Prime to check:%d 1 if yes, 0 if not: %d\n", 5, ft_is_prime(5));
	printf("Prime to check:%d 1 if yes, 0 if not: %d\n", 13, ft_is_prime(13));
	printf("Prime to check:%d 1 if yes, 0 if not: %d\n", 15, ft_is_prime(15));
	printf("Prime to check:%d 1 if yes, 0 if not: %d\n", 31, ft_is_prime(31));
	printf("Prime to check:%d 1 if yes, 0 if not: %d\n", 24, ft_is_prime(24));
	printf("Prime to check:%d 1 if yes, 0 if not: %d\n", 36, ft_is_prime(36));
	return (0);
}
*/