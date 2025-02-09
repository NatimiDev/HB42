/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 15:27:43 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/09 15:27:43 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_nbr(char	*nbr)
{
	write(1, nbr, 5);
	if (nbr[0] != '9' || nbr[1] != '8')
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	char	nbr[5];

	nbr[0] = '0' - 1;
	nbr[2] = ' ';
	while (++nbr[0] <= '9')
	{
		nbr[1] = '0' - 1;
		while (++nbr[1] <= '9')
		{
			nbr[3] = nbr[0] - 1;
			nbr[4] = nbr[1];
			if (nbr[1] == '9')
			{
				nbr[3]++;
				nbr[4] = '0' - 1;
			}
			while (++nbr[3] <= '9')
			{
				while (++nbr[4] <= '9')
					ft_print_nbr(nbr);
				nbr[4] = '0' - 1;
			}
		}
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }
