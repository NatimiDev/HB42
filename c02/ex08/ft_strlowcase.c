/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 09:42:53 by nmikuka           #+#    #+#             */
/*   Updated: 2025/01/23 19:34:54 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*start;

	start = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str - 'A' + 'a';
		}
		str++;
	}
	return (start);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	c[] = "Hello World84641231&&()*&!";

// 	printf("Original: %s\n", c);
// 	printf("Lowcase: %s\n", ft_strlowcase(c));
// }
