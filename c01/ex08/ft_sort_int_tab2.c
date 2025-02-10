/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 15:46:22 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/10 21:27:29 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	j;
	int	min;
	int	min_idx;

	j = 0;
	min_idx = 0;
	while (j < size)
	{
		if (tab[j] < tab[min_idx])
			min_idx = j;
		j++;
	}
	if (min_idx != 0)
	{
		min = tab[min_idx];
		tab[min_idx] = tab[0];
		tab[0] = min;
	}
	if (size > 1)
		ft_sort_int_tab(tab + 1, size - 1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int n[] = {5, 6, 4, 0, 9, 8, 0, 9, 3};
// 	int *tab = n;
// 	int size = 9;
// 	int i = 0;

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
