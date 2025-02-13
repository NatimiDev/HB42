/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:50:36 by nmikuka           #+#    #+#             */
/*   Updated: 2025/01/24 07:27:38 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 != *s2)
		return (*s1 - *s2);
	return (0);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	*s1 = "Hello,";
// 	char	*s2 = "Hello, World";

// 	printf("%i\n", strcmp(s1, s2));
// 	printf("%i\n", ft_strcmp(s1, s2));
// 	printf("%i\n", ft_strcmp(s2, s2));
// 	printf("%i\n", ft_strcmp("", ""));
// }
