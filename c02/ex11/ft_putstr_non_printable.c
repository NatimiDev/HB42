/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 20:55:42 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/11 15:05:34 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_str_is_printable(char *str)
{
	if (*str >= 32 && *str <= 126)
		return (1);
	return (0);
}

unsigned char	ft_get_hex_char(int n)
{
	unsigned char	c;

	if (n >= 0 && n <= 9)
		c = '0' + n;
	else
		c = 'a' + n - 10;
	return (c);
}

void	ft_putchar_non_printable(unsigned char c)
{
	char	hex_out[3];

	hex_out[0] = '\\';
	hex_out[1] = ft_get_hex_char(c / 16);
	hex_out[2] = ft_get_hex_char(c % 16);
	write(STDOUT_FILENO, hex_out, 3);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (ft_str_is_printable(str))
			ft_putchar(*str);
		else
			ft_putchar_non_printable(*str);
		str++;
	}
}

// int	main(void)
// {
// 	char nonprintable[] = {
//         '\xE2', '\xFB', '\xFB', '\x96', '\xBB', '\xF6', '\xF8', '\xD2',
//         '\xEF', '\x9A', '\xB3', '\xBF', '\xED', 'P',    '\x0B', '\xC2',
//         '\x98', '\xCF', '\xCF', '\xDF', '\xBB', '\xC2', '\0'
//     };

// 	ft_putstr_non_printable("Couco ?");
// 	ft_putchar('\n');
// 	ft_putstr_non_printable("Coucou\ntu vas bien ?");
// 	ft_putchar('\n');
// 	ft_putstr_non_printable(nonprintable);
// }
