/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 20:20:21 by nmikuka           #+#    #+#             */
/*   Updated: 2025/01/23 19:29:40 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
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

// 	str = "fdkfjdk";
// 	printf("Checking %s. Lowercase - %i\n", str, ft_str_is_lowercase(str));
// 	str = "fdkfjd:k";
// 	printf("Checking %s. Lowercase - %i\n", str, ft_str_is_lowercase(str));
// 	str = "fdkfjdK";
// 	printf("Checking %s. Lowercase - %i\n", str, ft_str_is_lowercase(str));
// }
