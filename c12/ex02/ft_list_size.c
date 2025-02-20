/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 11:36:45 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/20 11:44:00 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		size;
	t_list	*ptr;

	ptr = begin_list;
	size = 0;
	while (ptr)
	{
		size++;
		ptr = ptr->next;
	}
	return (size);
}

// void	ft_list_push_front(t_list **begin_list, void *data)
// {
// 	t_list	*res;

// 	res = ft_create_elem(data);
// 	res->next = *begin_list;
// 	*begin_list = res;
// }

// #include <stdlib.h>
// #include <stdio.h>

// t_list	*ft_create_elem(void *data)
// {
// 	t_list	*res;

// 	res = malloc(sizeof(t_list *));
// 	res->next = NULL;
// 	res->data = data;
// 	return (res);
// }

// int	main(void)
// {
// 	t_list	*res;

// 	res = ft_create_elem("hihi");
// 	ft_list_push_front(&res, "front");
// 	ft_list_push_front(&res, "front1");
// 	ft_list_push_front(&res, "front2");
// 	printf("%d\n", ft_list_size(res));
// }
