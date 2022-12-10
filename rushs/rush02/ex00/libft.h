/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-but <arde-but@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:48:58 by arde-but          #+#    #+#             */
/*   Updated: 2022/10/02 18:33:33 by arde-but         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

# include <fcntl.h>

int		ft_strlen(char *str);
char	*cut_newline(char *str);
char	*cut_before(char *src, char *to_find);
char	*find_in_doc(char *path, char *input);
void	ft_putstr(char *str);
char	*ft_strdup(char *src);

#endif