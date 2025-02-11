/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 09:54:18 by nmikuka           #+#    #+#             */
/*   Updated: 2025/01/23 20:18:09 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char	*start;
	char	*prev;

	start = str;
	if (*start >= 'a' && *start <= 'z')
		*start = *start - 'a' + 'A';
	while (*str)
	{
		prev = str;
		str++;
		if (!((*prev >= 'a' && *prev <= 'z') || (*prev >= 'A' && *prev <= 'Z')
				|| (*prev >= '0' && *prev <= '9')))
		{
			if (*str >= 'a' && *str <= 'z')
				*str = *str - 'a' + 'A';
		}
		else
		{
			if (*str >= 'A' && *str <= 'Z')
				*str = *str - 'A' + 'a';
		}
	}
	return (start);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*c:
// c  = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

// 	printf("Original: %s\n", c);
// 	printf("Capitalize: %s\n", ft_strcapitalize(c));
// }
