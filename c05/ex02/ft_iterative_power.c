/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:51:49 by nmikuka           #+#    #+#             */
/*   Updated: 2025/01/28 08:30:51 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("0**0 = %d\n", ft_iterative_power(0, 0));
// 	printf("0**2 = %d\n", ft_iterative_power(0, 2));
// 	printf("5**2 = %d\n", ft_iterative_power(5, 2));
// 	printf("2**6 = %d\n", ft_iterative_power(2, 6));
// 	printf("-2**6 = %d\n", ft_iterative_power(-2, 5));
// 	printf("-2**-5 = %d\n", ft_iterative_power(2, -5));
// }
