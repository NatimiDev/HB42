/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:14:17 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/11 20:53:22 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		digit;
	char	digit_as_char;

	digit = 0;
	while (digit <= 9)
	{
		digit_as_char = '0' + digit;
		write(1, &digit_as_char, 1);
		digit ++;
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// }
