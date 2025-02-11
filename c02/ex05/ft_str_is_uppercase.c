/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 20:20:25 by nmikuka           #+#    #+#             */
/*   Updated: 2025/01/23 19:44:43 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
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

// 	str = "FDLFJELFJE";
// 	printf("Checking %s. Uppercase - %i\n", str, ft_str_is_uppercase(str));
// 	str = "FDLFJE:LFJE";
// 	printf("Checking %s. Uppercase - %i\n", str, ft_str_is_uppercase(str));
// 	str = "FDLFJElFJE";
// 	printf("Checking %s. Uppercase - %i\n", str, ft_str_is_uppercase(str));
// }
