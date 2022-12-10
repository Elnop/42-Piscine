/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:23:58 by llarue            #+#    #+#             */
/*   Updated: 2022/09/25 21:15:43 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		fill_board(int board[4][4], int *input);

void	print_board(int board[4][4]);

/* Fill '1 2 3 4' on rows with a '4' from the input */
void	line4_1(int board[4][4], int *input, int pos)
{
	int	fill;

	fill = 0;
	while (pos < 16)
	{
		if ((input[pos] == 4) && (pos >= 8 && pos <= 11))
		{
			while (fill < 4)
			{
				board[pos % 4][fill] = fill + 1;
				fill++;
			}
		}
		fill = 4;
		if ((input[pos] == 4) && (pos >= 12 && pos <= 15))
		{
			while (fill > 0)
			{
				board[pos % 4][4 - fill] = fill;
				fill--;
			}
		}
		pos++;
	}
}

/* Fill '1 2 3 4' on columns with a '4' from the input */
void	line4_0(int board[4][4], int *input)
{
	int	pos;
	int	fill;

	pos = 0;
	fill = 0;
	while (pos < 8)
	{
		if ((input[pos] == 4) && (pos >= 0 && pos <= 3))
		{
			while (++fill <= 4)
				board[fill - 1][pos] = fill;
		}
		fill = 5;
		if ((input[pos] == 4) && (pos >= 4 && pos <= 7))
		{
			while (--fill > 0)
				board[4 - fill][pos % 4] = fill;
		}
		pos++;
	}
	line4_1(board, input, pos);
}

/* Put a '4' adjacent to every '1' from the input */
void	put_1(int board[4][4], int *input)
{
	int	pos;

	pos = 0;
	while (pos < 16)
	{
		if ((input[pos] == 1) && ((pos >= 0) && (pos <= 3)))
			board[0][pos] = 4;
		if ((input[pos] == 1) && ((pos >= 4) && (pos <= 7)))
			board[3][pos - 4] = 4;
		if ((input[pos] == 1) && ((pos >= 8) && (pos <= 11)))
			board[pos - 8][0] = 4;
		if ((input[pos] == 1) && ((pos >= 12) && (pos <= 15)))
			board[pos - 12][3] = 4;
		pos++;
	}
	line4_0(board, input);
}

int	init_board(int *input)
{
	int	rig;
	int	col;
	int	board[4][4];

	rig = 0;
	col = 0;
	while (rig < 4)
	{
		col = 0;
		while (col < 4)
		{
			board[rig][col] = 0;
			col++;
		}
		rig++;
	}
	put_1(board, input);
	if (fill_board(board, input) == 1)
		print_board(board);
	else
		write(1, "\nError no solution found\n\n", 26);
	return (0);
}
/* Initialise every number already known in the grid from input */
/* Run recursive filling of the rest of the board */