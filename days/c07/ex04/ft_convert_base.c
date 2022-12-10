/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperroti <lperroti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 21:49:35 by lperroti          #+#    #+#             */
/*   Updated: 2022/10/01 16:35:33 by lperroti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi_base(char *str, char *base);
char	*lp_itoa_base(int nbr, char *base, char *str, long int *i);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char		*str;
	long int	tmp;
	long int	i;

	i = 0;
	tmp = ft_atoi_base(nbr, base_from);
	str = (char *)malloc(35 * sizeof(char));
	if (!str)
		return (NULL);
	return (lp_itoa_base(tmp, base_to, str, &i));
}
/*
int main(int argc, char *argv[])
{
	printf("%s", ft_convert_base(argv[1], argv[2], argv[3]));
	return (0);
}
*/