/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperroti <lperroti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 01:04:15 by lperroti          #+#    #+#             */
/*   Updated: 2022/09/25 03:11:13 by lperroti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	is_sorted;
	int	i;

	is_sorted = 0;
	while (!is_sorted)
	{
		is_sorted = 1;
		i = 0;
		while (i < size)
		{
			if (tab[i] > tab[i + 1])
			{
				is_sorted = 0;
				ft_swap(&tab[i], &tab[i + 1]);
			}
			i++;
		}
	}
}

/*
int main(void)
{
	int i;
	int	tab[9] = { 1, 2, 5, 8, -4, 0, 4, 2, 6 };
	
	i = 0;
	ft_sort_int_tab(tab, 9);
	while (i < 9)
	{
		printf("%d", tab[i]);
		i++;
	}
}
*/