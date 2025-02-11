/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 20:25:38 by nmikuka           #+#    #+#             */
/*   Updated: 2025/01/23 19:45:02 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
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
// 	printf("Checking %s. Printable - %i\n", str, ft_str_is_printable(str));
// 	str = "FDLFJE:LFJE\n";
// 	printf("Checking %s. Printable - %i\n", str, ft_str_is_printable(str));
// 	str = "FDLFJEl\r sFJE";
// 	printf("Checking %s. Printable - %i\n", str, ft_str_is_printable(str));
// }
