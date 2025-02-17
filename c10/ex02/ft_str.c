/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 16:22:34 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/17 16:27:56 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_str.h"

int	ft_strlen(char *str)
{
	int	length;

	if (!str)
		return (0);
	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

char	*ft_strappend(char *str1, char *str2)
{
	char	*res;
	int		i;

	res = malloc(sizeof(char) * (ft_strlen(str1) + ft_strlen(str2) + 1));
	if (!res)
	{
		free(str1);
		return (NULL);
	}
	i = 0;
	while (str1 && str1[i])
	{
		res[i] = str1[i];
		i++;
	}
	free(str1);
	while (*str2)
	{
		res[i] = *str2;
		str2++;
		i++;
	}
	res[i] = '\0';
	return (res);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putstr_tail(char *str, int n)
{
	int	l;

	l = ft_strlen(str);
	if (l > n)
		ft_putstr(&str[l - n]);
	else
		ft_putstr(&str[0]);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	number;

	sign = 1;
	number = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10 + (*str - '0');
		str++;
	}
	return (number * sign);
}
