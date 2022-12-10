/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperroti <lperroti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:21:22 by lperroti          #+#    #+#             */
/*   Updated: 2022/10/04 19:05:18 by lperroti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_charset(char c, char	*charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	wordlen(char *str,	char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !is_charset(str[i], charset))
		i++;
	return (i);
}

char	*first_word(char *str, char *charset)
{
	char	*word;
	int		len;
	int		i;

	len = wordlen(str, charset);
	word = malloc((len + 1) * sizeof(char));
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = 0;
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		tab_index;

	tab_index = 0;
	tab = malloc((ft_strlen(str) + 1) * sizeof(char *));
	while (*str)
	{
		while (is_charset(*str, charset) && *str)
			str++;
		if (!*str)
			break ;
		tab[tab_index] = first_word(str, charset);
		tab_index++;
		str += wordlen(str, charset);
	}
	tab[tab_index] = NULL;
	return (tab);
}
/*
int main(int argc, char **argv)
{
	printf("- %s\n", ft_split(argv[1], argv[2])[0]);
	printf("- %s\n", ft_split(argv[1], argv[2])[1]);
	return 0;
}
*/