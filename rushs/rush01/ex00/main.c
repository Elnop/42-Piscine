/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 12:22:16 by llarue            #+#    #+#             */
/*   Updated: 2022/09/25 21:17:52 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	init_board(int *input);

/* There can only be max two '4' in the input */
int	syntax_error(char *input)
{
	int	i;
	int	error;

	i = 0;
	error = 0;
	while (input[i])
	{
		if (input[i] == '4')
			error++;
		i++;
	}
	if (error > 2)
		return (1);
	i = 0;
	error = 0;
	while (input[i])
	{
		if (input[i] == '1')
			error++;
		i++;
	}
	if (error != 4)
		return (1);
	return (0);
}

int	check_input(char *argv, int *input)
{
	int	i;
	int	output;

	i = 0;
	output = 0;
	if (syntax_error(argv) == 0)
	{
		while (argv[i] != '\0')
		{
			if ((argv[i] >= '1' && argv[i] <= '4') && ((argv[i + 1] == ' ')
					|| ((argv[i + 1] == 0) && (argv[i - 1] == ' '))))
			{
				input[output] = (argv[i] - '0');
				output++;
				i++;
			}
			if ((argv[i] >= 9 && argv[i] <= 13) || argv[i] == 32)
				i++;
			else
				return (output);
		}
		return (output);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	input[16];

	if (argc == 2)
	{
		if (check_input(argv[1], input) == 16)
			init_board(input);
		else
			write(1, "\nError : Input incorrect\n\n", 26);
	}
	else
		write(1, "\nError : Wrong number of args\n\n", 31);
	return (0);
}
/* There should de four '1' in the input */