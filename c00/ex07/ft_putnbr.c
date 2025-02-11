/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 11:41:10 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/11 15:30:05 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	char_to_print;

	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			ft_putnbr(-214748364);
			ft_putnbr(8);
		}
		else
		{
			write(1, "-", 1);
			ft_putnbr(-nb);
		}
	}
	else if (nb < 10)
	{
		char_to_print = '0' + nb;
		write(1, &char_to_print, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

// int main()
// {
// 	ft_putnbr(2);
// 	write(1, "\n", 1);
// 	ft_putnbr(-1232);
// 	write(1, "\n", 1);
// 	ft_putnbr(-2147483648);
// 	write(1, "\n", 1);
// 	ft_putnbr(2147483647);
// }