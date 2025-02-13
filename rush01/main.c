/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 10:59:11 by aisaev            #+#    #+#             */
/*   Updated: 2025/01/26 20:52:50 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h> 

void	put_error_msg(void);
void	printarray2D(int **arr);
void	fill_vector(char *input_str, int *vector, int start_pos, int size);
void    solve(int **board, int *colup, int *coldown, int *rowleft, int *rowright);

void printarray(int *arr)
{
	int i = 0;

	while (i < 4)
	{
		printf("%d, ", arr[i]);
		i++;
	}
	printf("\n");
}

int	main(int argc, char *argv[])
{
	int	*colup;
	int	*coldown;
	int	*rowleft;
	int	*rowright;
	int	**board;
	int sizeofint;
	int n;

	n = 4;
	sizeofint = 4;
	if (argc != 2)
	{
		put_error_msg();
		return (0);
	}
	printf("arguments %d, %s\n", argc, argv[1]);
	colup = malloc(n * sizeofint);
	coldown = malloc(n * sizeofint);
	rowleft = malloc(n * sizeofint);
	rowright = malloc(n * sizeofint);
	board = malloc(8 * n);
	int i = 0;
	while (i < n)
	{
		board[i] = malloc(sizeofint * n);
		i++;
	}
	fill_vector(argv[1], colup, 0, n);
	fill_vector(argv[1], coldown, 1, n);
	fill_vector(argv[1], rowleft, 2, n);
	fill_vector(argv[1], rowright, 3, n);
	printarray(colup);
	printarray(coldown);
	printarray(rowleft);
	printarray(rowright);
	// solve(board, colup, coldown, rowleft, rowright);
	printarray2D(board);
	// free(colup);
	return (0);
}
