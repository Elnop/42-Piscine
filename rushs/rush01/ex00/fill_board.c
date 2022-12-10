/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_board.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:45:02 by llarue            #+#    #+#             */
/*   Updated: 2022/09/25 21:17:35 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_board(int board[4][4], int *in_num);

/* Finds the next position on the board that hasn't been filled */
int	lookfor0(int board[4][4], int *r, int *c)
{
	*r = 0;
	*c = 0;
	while (*r < 4)
	{
		*c = 0;
		while (*c < 4)
		{
			if (board[*r][*c] == 0)
				return (1);
			*c += 1;
		}
		*r += 1;
	}
	return (0);
}

/* Checks if the given num already exists on the column */
int	safecol(int board[4][4], int col, int num)
{
	int	row;

	row = 0;
	while (row < 4)
	{
		if (board[row][col] == num)
			return (0);
		row++;
	}
	return (1);
}

	/* Checks if the given num already exists on the row */
int	saferow(int board[4][4], int row, int num)
{
	int	col;

	col = 0;
	while (col < 4)
	{
		if (board[row][col] == num)
			return (0);
		col++;
	}
	return (1);
}

int	checksafe(int board[4][4], int r, int c, int num)
{
	if (((saferow(board, r, num)) && (safecol(board, c, num))
			&& (board[r][c] == 0)))
		return (1);
	return (0);
}

int	fill_board(int board[4][4], int *input)
{
	int	row;
	int	col;
	int	n;

	n = 1;
	if ((lookfor0(board, &row, &col) == 0) && (check_board(board, input) == 1))
		return (1);
	while (n <= 4)
	{
		if (checksafe(board, row, col, n))
		{
			board[row][col] = n;
			if (fill_board(board, input) == 1)
				return (1);
			board[row][col] = 0;
		}
		n++;
	}
	return (0);
}
/*
> If the given num doesn't already exist on the col or row,
> it is safe to use 
*/
/* Stop searching when there are no empty spaces and the board is valid */
/* Call recursion after filling current space */
/*
> Reset space to 0 if no valid solution found
> for the rest of the board
*/