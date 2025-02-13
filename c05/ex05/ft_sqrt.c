/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 19:38:30 by nmikuka           #+#    #+#             */
/*   Updated: 2025/01/28 08:38:28 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
	int a;

	if (nb < 0)
		return 0;
	a = 0;
	while (a * a < nb && a < 46341)
	{
		a++;
		printf("%d, %d\n", a, a*a);
		if (a * a == nb)
			return (a);
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_sqrt(2147483647));
// }
