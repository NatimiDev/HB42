/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:34:43 by nmikuka           #+#    #+#             */
/*   Updated: 2025/01/25 23:06:52 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_error_msg(void)
{
	write(1, "Error\n", 6);
}

void printarray2D(int **arr)
{
	char int_to_c;
	int i = 0;
	int j = 0;
	
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			int_to_c = arr[i][j] + '0';
			write(1, &int_to_c, 1);
			j++;
			if (j != 4)
				write(1, " ", 1);
			}
		write(1, "\n", 1);
		i++;
	}
}