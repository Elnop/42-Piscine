/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperroti <lperroti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 04:47:13 by lperroti          #+#    #+#             */
/*   Updated: 2022/09/25 00:55:52 by lperroti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[size - 1 - i]);
		i++;
	}
}
/*
#include <stdio.h>
int    main(void)
{
    int size;

    int tab[10] = {1,2,3,4,5,6,7,8,9,10};
    size = 10;
    ft_rev_int_tab(tab,size);
    int i = 0;
    while (i < size)
    {
        printf("%d\n", tab[i]);
        i++;
    }
    
//    printf("%d,%d,%d,%d,%d", tab[0],tab[1],tab[2],tab[3],tab[4]);
}
*/