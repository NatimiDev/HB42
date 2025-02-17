/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 17:18:06 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/17 17:34:53 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*res;

	if (tab == NULL || length <= 0 || f == NULL)
		return (NULL);
	res = malloc(sizeof(int) * length);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return (res);
}

// int	ft_ft(int nbr)
// {
// 	return (nbr + 1);
// }
// #include <stdio.h>

// int	main(void)
// {
// 	int	tab[3];
// 	int *tt;

// 	tab[0] = 222;
// 	tab[1] = 32132;
// 	tab[2] = 4323;
// 	tt = ft_map(tab, 3, &ft_ft);
// 	printf("%d %d %d\n", tab[0], tab[1], tab[2]);
// 	printf("%d %d %d\n", tt[0], tt[1], tt[2]);
// }
