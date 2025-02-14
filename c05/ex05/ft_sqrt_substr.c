/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 19:38:30 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/14 18:19:05 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	a;
	int	sqrt;

	if (nb < 0)
		return (0);
	a = 1;
	sqrt = 0;
	while (nb > 0)
	{
		nb -= a;
		a += 2;
		sqrt++;
	}
	if (nb == 0)
		return (sqrt);
	else
		return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int i = 0;
// 	while (i <= 2000000)
// 	{
// 		ft_sqrt(i);
// 		i++;
// 	}
// }
