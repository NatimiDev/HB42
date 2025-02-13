/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:38:46 by nmikuka           #+#    #+#             */
/*   Updated: 2025/01/24 07:27:59 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*dest_start;

	dest_start = dest;
	while (*dest)
	{
		dest++;
	}
	while (nb > 0 && *src)
	{
		*dest = *src;
		src++;
		dest++;
		nb--;
	}
	*dest = '\0';
	return (dest_start);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	dest[10] = "Hello, ";
// 	char	src[] = "World!";
// 	int		n = 10;

// 	printf("Result: %s\n", strncat(dest, src, n));
// 	return (0);
// }
