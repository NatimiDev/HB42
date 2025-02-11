/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 17:38:02 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/11 14:19:36 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*dest_start;

	dest_start = dest;
	while (n > 0 && *src)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (dest_start);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	destination[9];

// 	ft_strncpy(destination, "abcdefgh", sizeof(destination));
// 	printf("Dst: %s\n", destination);
// 	strncpy(destination, "abcdefgh", sizeof(destination));
// 	printf("Dst: %s\n", destination);
// 	return (0);
// }
