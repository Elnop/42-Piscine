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

int	ft_controle(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "Erreur : x ou y est negatif ou nul\n", 35);
		return (0);
	}
	if (x > 80 || y > 200)
	{
		write(1, "Erreur : x ou y est trop grand (x > 80 ou y > 200)\n", 51);
		return (0);
	}
	return (1);
}

void	rush00(int x, int y)
{
	int	ix;
	int	iy;

	if (ft_controle(x, y))
	{
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
}
