/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natimi <natimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:09:42 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/13 20:44:18 by natimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		n--;
	}
	if (n > 0 && *s1 != *s2)
		return (*s1 - *s2);
	return (0);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	*s1 = "Hello";
// 	char	*s2 = "Hello, World";

// 	printf("%i\n", strncmp(s1, s2, 10));
// 	printf("%i\n", ft_strncmp(s1, s2, 10));
// 	printf("%i\n", ft_strncmp(s2, s2, sizeof(s2)));
// 	printf("%i\n", ft_strncmp("", "", 0));
// }
