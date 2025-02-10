/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 12:00:54 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/10 21:17:33 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a / *b;
	*b = *a % *b;
	*a = tmp;
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 39;
// 	b = 5;
// 	printf("a = %d, b = %d, ", a, b);
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("div = %d, mod = %d\n", a, b);
// }
