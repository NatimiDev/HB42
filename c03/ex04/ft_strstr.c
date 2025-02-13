/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:45:14 by nmikuka           #+#    #+#             */
/*   Updated: 2025/01/24 07:29:48 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_compare(char *str, char *to_find)
{
	while (*to_find && *str)
	{
		if (*str != *to_find)
			return (0);
		str++;
		to_find++;
	}
	if (*to_find == '\0')
		return (1);
	return (0);
}

char *ft_strstr(char *str, char *to_find)
{
	char	*ptr;

	ptr = NULL;
	while (*str)
	{
		if (ft_compare(str, to_find))
			return(str);
		str++;
	}
	return (ptr);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char *largestring = "Foo Bar Baz";
// 	char *smallstring = "Bar";
// 	char *ptr;

// 	printf("%s\n", strstr(largestring, smallstring));
// 	printf("%s\n", ft_strstr(largestring, smallstring));
// 	char *a = NULL;
// 	printf("%s\n", a);
// }