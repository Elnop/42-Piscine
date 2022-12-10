/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:03:41 by lcadinot          #+#    #+#             */
/*   Updated: 2022/09/18 14:39:06 by lperroti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	rush00(int x, int y);
void	rush01(int x, int y);
void	rush02(int x, int y);
void	rush03(int x, int y);
void	rush04(int x, int y);

int		ft_mon_atoi(char *str);

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

void	print_rush(int rush_number, int x, int y)
{	
	if (ft_controle(x, y))
	{
		if (x <= 0 || y <= 0)
			return ;
		if (rush_number == 0)
			rush00(x, y);
		if (rush_number == 1)
			rush01(x, y);
		if (rush_number == 2)
			rush02(x, y);
		if (rush_number == 3)
			rush03(x, y);
		if (rush_number == 4)
			rush04(x, y);
	}
}

int	set_arg(char *str)
{	
	str[0] = ' ';
	str[1] = ' ';
	return (ft_mon_atoi(str));
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;
	int	rush_number;
	int	i_args;

	x = 1;
	y = 1;
	rush_number = 0;
	i_args = 1;
	while (i_args < argc)
	{
		if (argv[i_args][0] == 'x' && argv[i_args][1] == '=')
			x = set_arg(argv[i_args]);
		if (argv[i_args][0] == 'y' && argv[i_args][1] == '=')
			y = set_arg(argv[i_args]);
		if (argv[i_args][0] == 'r' && argv[i_args][1] == '=')
			rush_number = set_arg(argv[i_args]);
		i_args++;
	}
	print_rush(rush_number, x, y);
}
