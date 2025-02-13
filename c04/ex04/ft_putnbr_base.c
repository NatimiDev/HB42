/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 21:13:57 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/13 21:41:09 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
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
	int i;
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

int	is_valid_base(char *base)
{
	if (ft_strlen(base) < 2)
	{
		printf("invalid len = %d\n", ft_strlen(base));
		return (0);
	}
	if (has_unvalid_char(base))	
	{
		printf("has unvalid char\n");
		return (0);
	}
	return (1);
}

void ft_putnbr_base(int nbr, char *base)
{
	if (!is_valid_base(base))
		write(1,"invalid base", 12);
	else
		write(1,"valid base", 10);
}

int main(void)
{
	ft_putnbr_base(10, "lamkdil");
}