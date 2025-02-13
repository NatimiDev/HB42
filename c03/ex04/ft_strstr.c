/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natimi <natimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:45:14 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/13 20:47:12 by natimi           ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	char	*ptr;

	if (!*str && ft_compare(str, to_find))
		return (str);
	ptr = 0;
	while (*str)
	{
		if (ft_compare(str, to_find))
			return (str);
		str++;
	}
	return (ptr);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char *largestring = "";
// 	char *smallstring = "";
// 	char *ptr;

// 	printf("%s\n", strstr(largestring, smallstring));
// 	printf("%p\n", ft_strstr(largestring, smallstring));
// }