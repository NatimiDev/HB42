/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:15:03 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/11 15:30:17 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	num[3];
	char	*separator;

	num[0] = '0';
	separator = ", ";
	while (num[0] <= '7')
	{
		num[1] = num[0] + 1;
		while (num[1] <= '8')
		{
			num[2] = num[1] + 1;
			while (num[2] <= '9')
			{
				write(1, &num[0], 1);
				write(1, &num[1], 1);
				write(1, &num[2], 1);
				if (!(num[0] == '7' && num[1] == '8' && num[2] == '9'))
					write(1, separator, 2);
				num[2]++;
			}
			num[1]++;
		}
		num[0]++;
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// }
