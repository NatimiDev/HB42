/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:37:40 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/03 18:18:36 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strs_to_tab.h"
#include <unistd.h>
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

char	*ft_strcpy(char *dest, char *src)
{
	char	*dest_begin;

	dest_begin = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest_begin);
}

char	*ft_strdup(char *src)
{
	char *dst;

	dst = malloc(sizeof(char) * ft_strlen(src));
	if (dst == NULL)
		return (NULL);
	ft_strcpy(dst, src);
	return (dst);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str *result;
	int i;

	i = 0;
	result = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	while (i < ac)
	{
		result[i].size = ft_strlen(av[i]);
		result[i].str = av[i];
		result[i].copy = ft_strdup(av[i]);
		if (result[i].copy == NULL)
            return (NULL);
		i++;
	}
	result[i].size = 0;
	result[i].str = NULL;
	result[i].copy = NULL;
	return (result);
}

// int main(int argc, char **argv)
// {
//     t_stock_str *tab;

//     tab = ft_strs_to_tab(argc - 1, argv + 1);
//     ft_show_tab(tab);
//     return (0);
// }