/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 19:43:21 by nmikuka           #+#    #+#             */
/*   Updated: 2025/01/23 19:22:57 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *str;
// 	str = "fdflsjee";
// 	printf("Checking %s. Is alpha - %i\n", str, ft_str_is_alpha(str));
// 	str = "fdfls4jee";
// 	printf("Checking %s. Is alpha - %i", str, ft_str_is_alpha(str));
// }
