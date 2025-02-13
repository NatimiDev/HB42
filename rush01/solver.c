/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 11:00:52 by aisaev            #+#    #+#             */
/*   Updated: 2025/01/26 07:37:24 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	printarray2D(int **arr);

void	put_error_msg(void);
void solve_rec(int **board, int *colup, int *coldown, int *rowleft, int *rowright, int i, int j);
int	is_possible_solution(int **board, int *colup, int *coldown, int *rowleft, int *rowright, int i, int j);
int is_acceptable_number(int **board, int i, int j, int val);

void    solve(int **board, int *colup, int *coldown, int *rowleft, int *rowright)
{
    // fill 1 field
	solve_rec(board, colup, coldown, rowleft, rowright, 0, 0);
    // check if allowed 
    // 

}

void solve_rec(int **board, int *colup, int *coldown, int *rowleft, int *rowright, int i, int j)
{
	int val;

	val = 1;
	while(val <= 4)
	{
		if (is_acceptable_number(board, i, j, val))
		{
			board[i][j] = val;
			printarray2D(board);
			write(1, "\n", 1);
			printf("is pos_solution %d\n", is_possible_solution(board, colup, coldown, rowleft, rowright, i, j));
			if (is_possible_solution(board, colup, coldown, rowleft, rowright, i, j))
			{
				if (i == 3 && j == 3)
				{
					// solved
					write(1, "Solved\n", 7);
				}
				else if (j==3)
					solve_rec(board, colup, coldown, rowleft, rowright, i++, 0);
				else
					solve_rec(board, colup, coldown, rowleft, rowright, i, j++);
			}
		}
		val++;
	}
	if (i == 3 && j == 3)
	{
		// solved
		write(1, "Solved\n", 7);
	}
	else
	{
		put_error_msg();
	}
}

int count_visible_up(int **board, int j)
{
	int i;
	int max;
	int count;

	i = 0;
	max = 0;
	count = 0;
	while(i < 4) {
		if (board[i][j] >= max)
		{
			max = board[i][j];
			count++;
		}
		i++;
	}
	return (count);
}

int count_visible_down(int **board, int j)
{
	int i;
	int max;
	int count;

	i = 3;
	max = 0;
	count = 0;
	while(i >= 0) {
		if (board[i][j] >= max)
		{
			max = board[i][j];
			count++;
		}
		i--;
	}
	return (count);
}


int count_visible_left(int **board, int i)
{
	int j;
	int max;
	int count;

	j = 0;
	max = 0;
	count = 0;
	while(j < 4) {
		if (board[i][j] >= max)
		{
			max = board[i][j];
			count ++;
		}
		j++;
	}
	return (count);
}

int count_visible_right(int **board, int i)
{
	int j;
	int max;
	int count;

	j = 3;
	max = 0;
	count = 0;
	while(j >= 0) {
		if (board[i][j] >= max)
		{
			max = board[i][j];
			count++;
		}
		j--;
	}
	return (count);
}

// check if the value could be a solution 
int	is_possible_solution(int **board, int *colup, int *coldown, int *rowleft, int *rowright, int i, int j)
{
	printf("%i %i\n", count_visible_up(board, j), colup[j]);
	printf("%i %i\n", count_visible_down(board, j), coldown[j]);
	printf("%i %i\n", count_visible_left(board, i), rowleft[i]);
	printf("%i %i\n", count_visible_right(board, i), rowright[i]);
	if (count_visible_up(board, j) > colup[j]
		|| count_visible_down(board, j) < coldown[j]
		|| count_visible_left(board, i) > rowleft[i]
		|| count_visible_right(board, i) < rowright[i])
		return (0);
	return (1);
}


// check if there is the same pillar left or above 
int is_acceptable_number(int **board, int i, int j, int val){
	int i_above;
	int j_left;

	i_above = 0;
	while (i_above < i)
	{
		if (board[i_above][j] == val)
			return (0);
		i_above++;
	}
	j_left = 0;
	while (j_left < j)
	{
		if (board[i][j_left] == val)
			return (0);
	}
	return (1);

}