/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 20:55:42 by nmikuka           #+#    #+#             */
/*   Updated: 2025/01/23 19:44:17 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_str_is_printable(char *str)
{
	if (!(*str >= 32 && *str <= 126))
		return (0);
	return (1);
}

char	ft_get_hex_char(int n)
{
	char	c;

	if (n >= 0 && n <= 9)
		c = '0' + n;
	else
		c = 'a' + n - 10;
	return (c);
}

void	ft_putchar_non_printable(char c)
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
// 	ft_putstr_non_printable("Couco ?");
// 	ft_putchar('\n');
// 	ft_putstr_non_printable("Coucou\ntu vas bien ?");
// }
