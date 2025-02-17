/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 19:31:52 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/17 19:41:03 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	if (!tab || length <= 0 || !f)
		return (0);
	if (length == 1)
		return (1);
	i = 1;
	while (i < length)
	{
		if (!f(tab[i - 1], tab[i]))
			return (0);
		i++;
	}
	return (1);
}

// int	ascending(int a, int b)
// {
// 	return (a < b);
// }

// int	descending(int a, int b)
// {
// 	return (a > b);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	int	tab[3];

// 	tab[0] = 2221;
// 	tab[1] = 323;
// 	tab[2] = 43;
// 	printf("%d\n", ft_is_sort(tab, 3, &descending));
// }
