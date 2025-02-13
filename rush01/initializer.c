/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initializer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 10:59:36 by aisaev            #+#    #+#             */
/*   Updated: 2025/01/25 16:56:59 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	put_error_msg(void);

int	is_valid_number(char *c)
{
	if (*c >= '1' && *c <= '4')
		return (1);
	return (0);
}

int	is_space(char *c)
{
	char	separator;

	separator = ' ';
	if (*c == separator)
		return (1);
	return (0);
}

void	fill_vector(char *input_str, int *vector, int start_pos, int size)
{
	int	start;
	int	i;
	int	j;

	start = 2 * start_pos * size;
	i = 0;
	j = start;
	while (/*input_str[j] != '\0' && */size > 0)
	{
		if (is_valid_number(&input_str[j]))
			vector[i] = input_str[j] - '0';
		else
		{
			put_error_msg();
			return ;
		}
		i++;
		j++;
		size--;
		if (is_space(&input_str[j]))
			j++;
		else if (input_str[j] != '\0')
		{
			put_error_msg();
			return ;
		}
	}
	if ( (j == 31 && input_str[j] != '\0') || j > 31 ) 
	{
		put_error_msg();
		return ;
	}
}