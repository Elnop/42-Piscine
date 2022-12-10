/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-but <arde-but@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:49:03 by arde-but          #+#    #+#             */
/*   Updated: 2022/10/02 18:31:46 by arde-but         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*cut_newline(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] == '\n')
		{
			str[i] = 0;
			return (str);
		}
		i++;
	}
	return (str);
}

char	*cut_before(char *src, char *to_find)
{
	int	i;
	int	to_findlen;

	to_findlen = ft_strlen(to_find);
	while (*src)
	{
		if (*src == '\n')
		{
			i = 0;
			src++;
			while (src[i] == to_find[i])
			{
				if (src[i + 1] == ':' && i + 1 == to_findlen)
				{
					return (src + to_findlen + 2);
				}
				i++;
			}
		}
		src++;
	}
	return (NULL);
}

char	*find_in_doc(char *path, char *input)
{
	int		size;
	int		fd;
	char	buf[1000];
	char	*output;

	if (!*path)
		path = ft_strdup("numbers.dict");
	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (NULL);
	size = read(fd, buf, 1000);
	buf[size] = 0;
	output = cut_newline(cut_before(buf, input));
	return (output);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}
