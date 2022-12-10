/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-but <arde-but@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:49:06 by arde-but          #+#    #+#             */
/*   Updated: 2022/10/02 18:39:36 by arde-but         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*dst;

	i = 0;
	dst = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!dst)
		return (NULL);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int	main(int argc, char **argv)
{
	char	*str;

	if (argc != 2 && argc != 3)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (argc == 2)
	{
		str = find_in_doc("", argv[1]);
		if (!str)
			return (0);
		ft_putstr(str);
		return (0);
	}
	if (argc == 3)
	{
		str = find_in_doc(argv[1], argv[2]);
		if (!str)
			return (0);
		ft_putstr(str);
		return (0);
	}
}
