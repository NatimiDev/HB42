/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:07:59 by nmikuka           #+#    #+#             */
/*   Updated: 2025/01/28 08:33:36 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("0**0 = %d\n", ft_recursive_power(0, 0));
// 	printf("0**2 = %d\n", ft_recursive_power(0, 2));
// 	printf("5**2 = %d\n", ft_recursive_power(5, 2));
// 	printf("2**6 = %d\n", ft_recursive_power(2, 6));
// 	printf("-2**6 = %d\n", ft_recursive_power(-2, 5));
// 	printf("-2**-5 = %d\n", ft_recursive_power(2, -5));
// }
