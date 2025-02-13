/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 21:13:57 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/13 23:24:30 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_putnbr_base_rec(int nbr, char *base)
{
	int	len;

	len = ft_strlen(base);
	if (nbr < len)
	{
		write(1, &base[nbr], 1);
		return ;
	}
	ft_putnbr_base_rec(nbr / len, base);
	write(1, &base[nbr % len], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = ft_strlen(base);
	if (len < 2)
		return ;
	if (has_unvalid_char(base))
		return ;
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		ft_putnbr_base_rec(-(nbr / len), base);
		ft_putnbr_base_rec(-(nbr % len), base);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	ft_putnbr_base_rec(nbr, base);
}

// int main(void)
// {
// 	ft_putnbr_base(-2147483648, "01");
// }