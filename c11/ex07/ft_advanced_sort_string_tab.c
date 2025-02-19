/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:04:06 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/19 18:19:09 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap_ptr(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	int		is_sorted;

	i = 0;
	j = 0;
	is_sorted = 0;
	if (!tab || !tab[0] || !tab[1])
		return ;
	while (tab[i] && !is_sorted)
	{
		j = 1;
		is_sorted = 1;
		while (tab[j])
		{
			if (cmp(tab[j - 1], tab[j]) > 0)
			{
				swap_ptr(&tab[j - 1], &tab[j]);
				is_sorted = 0;
			}
			j++;
		}
		i++;
	}
}

// int	ft_strcmp(char *s1, char *s2)
// {
// 	while (*s1 && *s2)
// 	{
// 		if (*s1 != *s2)
// 			return (*s1 - *s2);
// 		s1++;
// 		s2++;
// 	}
// 	if (*s1 != *s2)
// 		return (*s1 - *s2);
// 	return (0);
// }
// #include <stdio.h>

// int	main(void)
// {
// 	char	*tab[4];

// 	tab[0] = "bbc";
// 	tab[1] = "aBe";
// 	tab[2] = "abC";
// 	tab[3] = NULL;
// 	printf("Before sort %s %s %s \n", tab[0], tab[1], tab[2]);
// 	ft_advanced_sort_string_tab(tab, ft_strcmp);
// 	printf("After  sort %s %s %s \n", tab[0], tab[1], tab[2]);
// }
