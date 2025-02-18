/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 18:56:43 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/18 19:30:08 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_op.h"
#include "ft_str.h"

void	add(int a, int b)
{
	ft_putnbr(a + b);
}

void	subtract(int a, int b)
{
	ft_putnbr(a - b);
}

void	multiply(int a, int b)
{
	ft_putnbr(a * b);
}

void	divide(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : division by zero");
	else
		ft_putnbr(a / b);
}

void	modulo(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : modulo by zero");
	else
		ft_putnbr(a % b);
}
