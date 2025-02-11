/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:56:46 by nmikuka           #+#    #+#             */
/*   Updated: 2025/01/23 20:19:08 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *src)
{
	unsigned int	src_size;

	src_size = 0;
	while (*src)
	{
		src_size++;
		src++;
	}
	return (src_size);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_size;

	src_size = ft_strlen(src);
	while (size > 1 && *src)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	while (size > 0)
	{
		*dest = '\0';
		dest++;
		size--;
	}
	return (src_size);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char			*source = "Hello, World!";
// 	char			dest1[10];
// 	char			dest2[10];
// 	unsigned int 	n = 0;//sizeof(dest1);

// 	printf("%s %i\n", source, dest1, ft_strlcpy(dest1, source, n));
// 	printf("%s, Dest: %s %lu\n", source, dest2, strlcpy(dest2, source, n));
// 	return (0);
// }
