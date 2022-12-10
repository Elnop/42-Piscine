/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperroti <lperroti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:18:52 by lperroti          #+#    #+#             */
/*   Updated: 2022/09/23 11:21:21 by lperroti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	i;

	dest_size = ft_strlen(dest);
	i = 0;
	if (size <= dest_size)
		return (ft_strlen(src) + size);
	while (src[i] && i + dest_size < size - 1)
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest_size + ft_strlen(src));
}
/*
int main(void)
{
	printf("%d\n", ft_strlcat("\0test", "u", 0));
	printf("%d", strlcat("\0test", "u", 0));
	return (0);
}
*/
