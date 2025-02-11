/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 17:37:59 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/11 14:16:58 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*dest_begin;

	dest_begin = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest_begin);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*source = "Hello, World!";
// 	char	destination[15];

// 	ft_strcpy(destination, source);
// 	printf("Source: %s\n", source);
// 	printf("Destination: %s\n", destination);
// 	return (0);
// }
