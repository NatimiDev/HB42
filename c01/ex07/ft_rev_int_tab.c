/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 13:06:26 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/10 21:23:16 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[size - 1 - i];
		tab[size - 1 - i] = tab[i];
		tab[i] = tmp;
		i++;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	n[] = {1, 2, 3, 4, 5, 8};
// 	int	*tab = n;
// 	int	size = 6;
// 	int	i = 0;

// 	printf("Before: ");
// 	while (i < size)
// 	{
// 		printf("%d, ", tab[i]);
// 		i++;
// 	}
// 	ft_rev_int_tab(tab, size);
// 	printf("\nAfter : ");
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d, ", tab[i]);
// 		i++;
// 	}
// }
