/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 08:38:11 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/14 18:23:10 by nmikuka          ###   ########.fr       */
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
