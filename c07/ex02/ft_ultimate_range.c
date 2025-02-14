/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:07:51 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/14 18:41:48 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = (NULL);
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int i;
// 	int l;
// 	int *a;

// 	i = 0;
// 	l = ft_ultimate_range(&a, 10, 9);
// 	printf("%d, %p\n", l, a);
// 	while (i < l)
// 	{
// 		printf("%i\n", a[i]);
// 		i++;
// 	}
// }
