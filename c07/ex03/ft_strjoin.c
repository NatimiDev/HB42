/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:13:06 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/15 17:16:19 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*dest_start;

	dest_start = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest_start);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_length;
	char	*result;

	i = 0;
	total_length = ft_strlen(sep) * (size - 1);
	while (i < size)
	{
		total_length += ft_strlen(strs[i]);
		i++;
	}
	result = malloc(sizeof(char) * (total_length + 1));
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i != (size - 1))
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *a[3];
// 	char *b[3];
// 	char *c;

// 	a[0] = "abc ";
// 	a[1] = "def";
// 	a[2] = "!";
// 	b[0] = "";
// 	b[1] = "ss";
// 	b[2] = "";
// 	c = ft_strjoin(3, b, ".");
// 	printf("%s \n", c);
// 	free(c);
// 	c = ft_strjoin(3, a, "...");
// 	printf("%s \n", c);
// }
