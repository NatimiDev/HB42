/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 15:46:22 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/10 21:28:51 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min;
	int	min_idx;

	i = 0;
	while (i < size)
	{
		j = i;
		min_idx = j;
		while (j < size)
		{
			if (tab[j] < tab[min_idx])
				min_idx = j;
			j++;
		}
		if (min_idx != i)
		{
			min = tab[min_idx];
			tab[min_idx] = tab[i];
			tab[i] = min;
		}
		i++;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	n[] = {5, 6, 4, 0, 9, 8, 0, 9, 3};
// 	int	*tab = n;
// 	int	size = 9;
// 	int	i = 0;

// 	printf("Before: ");
// 	while (i < size)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	ft_sort_int_tab(tab, size);
// 	printf("\nAfter: ");
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// }
