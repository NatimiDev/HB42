/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 17:04:40 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/10 14:07:11 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	fill_nbr(char *str, int pos, int n)
{
	char	c;

	if (pos == n)
	{
		write(1, str, n);
		write(1, ", ", n);
		return ;
	}
	// printf("%s %c %d %d\n", str, c, pos, n);
	if (pos == 0)
		c = '0';
	else
		c = str[pos - 1] + 1;
	while (c <= '9' - n + pos + 1)
	{
		str[pos] = c;
		fill_nbr(str, pos + 1, n);
		c++;
	}
}

void	ft_print_combn(int n)
{
	char	res[n];
	
	fill_nbr(res, 0, n);
}

int	main(void)
{
	ft_print_combn(9);
	return (0);
}
