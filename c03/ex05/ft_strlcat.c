/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:08:14 by nmikuka           #+#    #+#             */
/*   Updated: 2025/01/24 07:28:17 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_l;
	unsigned int	src_l;
	unsigned int	l;
	unsigned int	i;

	src_l = 0;
	dest_l = 0;
	while (src[src_l] != '\0')
		src_l++;
	while (dest[dest_l] != '\0' && dest_l < size)
		dest_l++;
	l = src_l + dest_l;
	if (dest_l >= size)
		return (l);
	i = 0;
	while ((size - dest_l - 1) > i && src[i] != '\0')
	{
		dest[dest_l + i] = src[i];
		i++;
	}
	dest[dest_l + i] = '\0';
	return (l);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	dest[14] = "Hello, ";
// 	char	src[] = "World!";
// 	char	dest1[14] = "Hello, ";
// 	int		size = 13;

// 	printf("Result: %i\n", ft_strlcat(dest, src, size));
// 	printf("Result: %s\n", dest);
// 	printf("Result: %lu\n", strlcat(dest1, src, size));
// 	printf("Result: %s\n", dest1);
// 	return (0);
// }
