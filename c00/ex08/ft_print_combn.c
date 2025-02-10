/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 17:04:40 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/10 19:04:54 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_first_nbr(char *str, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (str[i] != '0' + i)
			return (0);
		i++;
	}
	return (1);
}

void	fill_nbr(char *str, int pos, int n)
{
	char	c;

	if (pos == n)
	{
		if (!is_first_nbr(str, n))
			write(1, ", ", 2);
		write(1, str, n);
		return ;
	}
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
	char	res[10];

	fill_nbr(res, 0, n);
}

int	main(void)
{
	ft_print_combn(5);
	return (0);
}
