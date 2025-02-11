/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 20:13:10 by nmikuka           #+#    #+#             */
/*   Updated: 2025/01/23 19:26:03 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
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
// 	char	*str;

// 	str = "123445459";
// 	printf("Checking %s. Is numeric - %i\n", str, ft_str_is_numeric(str));
// 	str = "12344&5459";
// 	printf("Checking %s. Is numeric - %i", str, ft_str_is_numeric(str));
// }
