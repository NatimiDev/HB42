/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 19:02:18 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/18 19:30:36 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
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

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	char	char_to_print;

	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
		}
		else
		{
			write(1, "-", 1);
			ft_putnbr(-nb);
		}
	}
	else if (nb < 10)
	{
		char_to_print = '0' + nb;
		write(1, &char_to_print, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
