/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 10:00:50 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/14 18:04:20 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int	has_unvalid_char(char *base)
{
	int	i;

	while (*base)
	{
		if (*base == '-' || *base == '+')
			return (1);
		i = 1;
		while (base[i])
		{
			if (*base == base[i])
				return (1);
			i++;
		}
		base++;
	}
	return (0);
}

int	pos_in_base(char c, char *base)
{
	int	pos;

	pos = 0;
	while (base[pos])
	{
		if (c == base[pos])
			return (pos);
		pos++;
	}
	return (-1);
}

long	convert_base(char *str, char *base)
{
	long	number;
	int		pos;
	int		len;

	len = ft_strlen(base);
	number = 0;
	while (*str)
	{
		pos = pos_in_base(*str, base);
		if (pos == -1)
			break ;
		number = number * len + pos;
		str++;
	}
	return (number);
}

int	ft_atoi_base(char *str, char *base)
{
	int		sign;
	long	number;

	if (ft_strlen(base) < 2)
		return (0);
	if (has_unvalid_char(base))
		return (0);
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
	number = convert_base(str, base);
	if ((sign == 1 && number > 2147483647)
		|| (sign == -1 && number > 2147483648))
		return (0);
	return (number * sign);
}

// int main(void)
// {
// 	printf("%d\n", ft_atoi_base("101", "01"));
// 	printf("%d\n", ft_atoi_base("2147483647", "0123456789"));
// 	printf("%d\n", ft_atoi_base("-10000000000000000000000000000000", "01"));
// }
