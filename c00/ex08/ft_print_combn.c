/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 17:04:40 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/09 17:04:40 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_digit(char start, char end)
{
	char c;

	c = start;
	while (c <= end)
	{
		write(1, &c, 1);
		if (end != '9')
			ft_print_digit(start + 1, end + 1);
		write(1, ", ", 1);
		c++;
	}
}

void	ft_print_combn(int n)
{
	char start;
	char end;

	start = '0';
	end = '9' - n;
	ft_print_digit(start, end);
}

int	main(void)
{
	ft_print_combn(1);
	return (0);
}
