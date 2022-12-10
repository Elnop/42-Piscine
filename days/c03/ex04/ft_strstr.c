/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperroti <lperroti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:12:16 by lperroti          #+#    #+#             */
/*   Updated: 2022/09/28 02:44:30 by lperroti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_str_is_find(char *s1, char *s2)
{
	int	s2_length;
	int	i;

	s2_length = ft_strlen(s2);
	i = 0;
	while (i < s2_length)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (!*to_find)
		return (str);
	i = 0;
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			if (!ft_str_is_find(&str[i], to_find))
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main()
{
	char *str = "jujujujulo\n";
	char *to_find = "jujul";
	write(1, str, 11);
	write(1, ft_strstr(str, to_find), 7);
	return (0);
}
*/