/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:21:03 by nmikuka           #+#    #+#             */
/*   Updated: 2025/01/24 07:27:54 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*dest_start;

	dest_start = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest_start);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	dest[20] = "Hello, ";
// 	char	src[] = "World!";

// 	printf("Result: %s\n", ft_strcat(dest, src));
// 	return (0);
// }
