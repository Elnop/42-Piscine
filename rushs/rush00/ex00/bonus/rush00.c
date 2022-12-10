/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:11:21 by lcadinot          #+#    #+#             */
/*   Updated: 2022/09/17 19:51:59 by lperroti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush00(int x, int y)
{
	int	ix;
	int	iy;

	if (x <= 0 || y <= 0)
		return ;
	iy = 0;
	while (iy < y)
	{
		ix = 0;
		while (ix < x)
		{
			if ((ix == 0 || ix == x - 1) && (iy == 0 || iy == y - 1))
				ft_putchar('o');
			else if (iy == 0 || iy == y - 1)
				ft_putchar('-');
			else if (ix == 0 || ix == x - 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			ix++;
		}
		ft_putchar('\n');
		iy++;
	}
}
