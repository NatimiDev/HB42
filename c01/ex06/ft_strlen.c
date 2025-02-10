/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 13:01:16 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/10 21:19:40 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;

// 	str = "abck";
// 	printf("str = %s, len = %d\n", str, ft_strlen(str));
// }
