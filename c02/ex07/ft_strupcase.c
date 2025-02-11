/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 20:34:29 by nmikuka           #+#    #+#             */
/*   Updated: 2025/01/23 19:34:15 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*start;

	start = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 'a' + 'A';
		}
		str++;
	}
	return (start);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	c[] = "Hello World84641231&&()*&!";

// 	printf("Upcase: %s\n", c);
// 	printf("Upcase: %s\n", ft_strupcase(c));
// }
