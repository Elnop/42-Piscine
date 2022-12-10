/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperroti <lperroti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:23:31 by lperroti          #+#    #+#             */
/*   Updated: 2022/10/06 11:56:06 by lperroti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_size;
	int	i;

	i = 0;
	dest_size = ft_strlen(dest);
	while (src[i])
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest);
}

int	lp_ultimate_length(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	int		seplen;

	if (!size)
		return (0);
	seplen = ft_strlen(sep);
	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		len += seplen;
		i++;
	}
	len -= seplen;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		strlen;
	int		i;

	strlen = lp_ultimate_length(size, strs, sep);
	str = (char *) malloc(strlen + 1 * sizeof(char));
	i = 0;
	str[0] = '\0';
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		i++;
		if (i < size)
			ft_strcat(str, sep);
	}
	str[strlen] = '\0';
	return (str);
}

int main(int argc, char *argv[])
{
	printf(ft_strjoin(argc, argv, "---"));
	return (0);
}
