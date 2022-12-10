/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperroti <lperroti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 21:51:13 by lperroti          #+#    #+#             */
/*   Updated: 2022/10/01 16:23:51 by lperroti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	checkbase(char *base)
{
	int		i;

	if (!base[0] || !base[1])
		return (0);
	while (*base)
	{
		if (
			*base == '+' || *base == '-'
			|| (*base >= '\t' && *base <= '\r') || *base == ' '
		)
			return (0);
		i = 1;
		while (base[i])
		{
			if (*base == base[i])
				return (0);
			i++;
		}
		base++;
	}
	return (1);
}

int	find_in_base(char c, char	*base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nbr;
	int	sign_coef;

	if (!checkbase(base))
		return (0);
	sign_coef = 1;
	nbr = 0;
	while ((*str && *str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			sign_coef *= -1;
		str++;
	}
	while (*str && find_in_base(*str, base) > -1)
	{
		nbr = nbr * ft_strlen(base) + find_in_base(*str, base);
		str++;
	}
	return (nbr * sign_coef);
}

char	*lp_itoa_base(int nbr, char *base, char *str, long int *i)
{
	unsigned int	baselen;

	if (!checkbase(base))
		return (0);
	if (nbr < 0)
	{
		nbr *= -1;
		str[*i] = '-';
		*i = 1 + *i;
	}
	baselen = ft_strlen(base);
	if (nbr / baselen > 0)
		lp_itoa_base(nbr / baselen, base, str, i);
	str[*i] = base[nbr % baselen];
	*i = *i + 1;
	str[*i] = '\0';
	return (str);
}
