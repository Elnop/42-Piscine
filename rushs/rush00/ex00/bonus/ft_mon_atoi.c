/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mon_atoi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:12:30 by lcadinot          #+#    #+#             */
/*   Updated: 2022/09/17 15:08:39 by lcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_mon_atoi(char *str)
{
	int	max;
	int	i;
	int	nbr;

	max = 1000;
	i = 0;
	nbr = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '+')
		i++;
	if (str[i] < '0' || str[i] > '9')
		return (-1);
	while (nbr < 1000 && str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	if (nbr >= max)
		return (max);
	return (nbr);
}

/*
** Ceci est un mini atoi.
** La fonction prend en entree une chaine de caractere.
** Elle ignore les espaces eventuelles au debut.
** Ignore un '+' eventuel
** Puis converti le reste en int et le renvoie.
** Si la chaine n'est pas de la forme souhaitee elle renvoie -1.
** Si le nombre est supperieur a max elle renvoie max 
*/
