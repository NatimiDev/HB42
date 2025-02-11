/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:14:42 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/11 15:14:43 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	sign_indicator;

	if (n < 0)
		sign_indicator = 'N';
	else
		sign_indicator = 'P';
	write(1, &sign_indicator, 1);
}

// int	main(void)
// {
// 	ft_is_negative(-5);
// 	ft_is_negative(10);
// 	ft_is_negative(0);
// }
