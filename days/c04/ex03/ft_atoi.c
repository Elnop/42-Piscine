/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperroti <lperroti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:43:53 by lperroti          #+#    #+#             */
/*   Updated: 2022/09/25 22:56:38 by lperroti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	nbr;
	int	coef;

	coef = 1;
	nbr = 0;
	while ((*str && *str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			coef *= -1;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		nbr = nbr * 10 + *str - '0';
		str++;
	}
	return (nbr * coef);
}
/*
#include <stdio.h>
int main()
{
	int nbr = ft_atoi("      ---+--1 2u34");
	printf("%d", nbr);
	return 0;
}
*/