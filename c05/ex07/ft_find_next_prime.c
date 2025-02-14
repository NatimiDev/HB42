/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 08:50:33 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/14 18:21:56 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_approx_sqrt(int nb)
{
	int	a;

	if (nb < 0)
		return (0);
	a = 0;
	while (a * a < nb && a < 46341)
	{
		a++;
		if (a * a == nb)
			return (a);
	}
	return (a);
}

int	ft_is_prime(int nb)
{
	int	sqrt;
	int	div;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	sqrt = ft_approx_sqrt(nb);
	div = 2;
	while (div <= sqrt)
	{
		if (nb % div == 0)
			return (0);
		div++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	find_prime;

	find_prime = nb;
	while (!ft_is_prime(find_prime))
	{
		find_prime++;
	}
	return (find_prime);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int nb = 10;
// 	printf("%d next prime -> %d\n", nb, ft_find_next_prime(nb));
// }
