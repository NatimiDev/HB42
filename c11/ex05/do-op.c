/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:19:29 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/18 19:40:32 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_op.h"
#include "ft_str.h"

void	do_op(int nbr1, int nbr2, void (*f)(int, int))
{
	f(nbr1, nbr2);
}

int	parse(int nbr1, int nbr2, char c)
{
	void	(*ft[5])(int, int);
	char	op[5];
	int		i;

	ft[0] = add;
	ft[1] = subtract;
	ft[2] = multiply;
	ft[3] = divide;
	ft[4] = modulo;
	op[0] = '+';
	op[1] = '-';
	op[2] = '*';
	op[3] = '/';
	op[4] = '%';
	i = 0;
	while (i < 5)
	{
		if (c == op[i])
		{
			do_op(nbr1, nbr2, ft[i]);
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	if (argc != 4)
		return (1);
	if (ft_strlen(argv[2]) != 1)
		ft_putnbr(0);
	return (parse(ft_atoi(argv[1]), ft_atoi(argv[3]), argv[2][0]));
}
