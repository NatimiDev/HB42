/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 19:04:29 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/17 19:18:47 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	if (!tab || !f)
		return (0);
	while (*tab)
	{
		if (f(*tab) != 0)
			return (1);
		tab++;
	}
	return (0);
}

// int	ft_strlen(char *str)
// {
// 	int	length;

// 	length = 0;
// 	while (str[length] != '\0')
// 	{
// 		length++;
// 	}
// 	return (length);
// }
// int	is_too_long(char *str)
// {
// 	if (ft_strlen(str) > 2)
// 		return (1);
// 	return (0);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	char	*tab[4];

// 	tab[0] = "12";
// 	tab[1] = "123";
// 	tab[2] = "4323";
// 	tab[3] = NULL;
// 	ft_any(tab, &is_too_long);
// 	printf("%d \n", ft_any(tab, &is_too_long));
// }
