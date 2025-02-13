/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:46:07 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/10 17:08:04 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_str(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write vfcn   ,  bv                              vcbv(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	while (i > 0)
	{
		ft_put_str(argv[i]);
		i--;
	}
	return (0);
}
