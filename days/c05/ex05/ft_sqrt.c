/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperroti <lperroti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:54:14 by lperroti          #+#    #+#             */
/*   Updated: 2022/10/03 14:51:28 by lperroti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;
	long	n;

	n = nb;
	if (n <= 0)
		return (0);
	if (n == 1)
		return (1);
	i = 2;
	if (n >= 2)
	{
		while (i * i <= n)
		{
			if (i * i == n)
				return (i);
			i++;
		}
	}
	return (0);
}
/*
int	main(void)
{
	printf("Sqrt of %d is: %d\n", 25, ft_sqrt(25));
	printf("Sqrt of %d is: %d\n", 0, ft_sqrt(0));
	printf("Sqrt of %d is: %d\n", 1, ft_sqrt(1));
	printf("Sqrt of %d is: %d\n", 23, ft_sqrt(23));
	printf("Sqrt of %d is: %d\n", 2147483647, ft_sqrt(2147483647));
	printf("Sqrt of %d is: %d\n", 1000, ft_sqrt(100));
	return (0);
}
*/