/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperroti <lperroti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:52:11 by lperroti          #+#    #+#             */
/*   Updated: 2022/09/27 01:39:16 by lperroti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	s1_length;
	int	s2_length;
	int	i;

	s1_length = ft_strlen(s1);
	s2_length = ft_strlen(s2);
	i = 0;
	while (i < s1_length || i < s2_length)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	sort_str_tab(int size, char *str_tab[])
{
	int	i;
	int	is_sorted;

	is_sorted = 0;
	while (!is_sorted)
	{
		is_sorted = 1;
		i = 1;
		while (i < size - 1)
		{
			if (ft_strcmp(str_tab[i], str_tab[i + 1]) > 0)
			{
				ft_swap(&str_tab[i], &str_tab[i + 1]);
				is_sorted = 0;
			}
			i++;
		}
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;

	sort_str_tab(argc, argv);
	i = 1;
	while (i < argc)
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
