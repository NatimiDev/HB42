/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:37:40 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/03 18:24:11 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_strs_to_tab.h"
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

void ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str != NULL)
	{
		ft_putstr(par[i].str);
		ft_putstr("\n");
		ft_putnbr(par[i].size);
		ft_putstr("\n");
		ft_putstr(par[i].copy);
		ft_putstr("\n");
		i++;
	}
}

// int main(int argc, char **argv)
// {
//     t_stock_str *tab;

//     tab = ft_strs_to_tab(argc - 1, argv + 1);
//     ft_show_tab(tab);
//     return (0);
// }