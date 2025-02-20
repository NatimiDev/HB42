/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 11:44:41 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/20 11:51:37 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*last;

	if (!begin_list)
		return (begin_list);
	last = begin_list;
	while (last->next)
		last = last->next;
	return (last);
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

// 	res = ft_create_elem("last");
// 	ft_list_push_front(&res, "front");
// 	ft_list_push_front(&res, "front1");
// 	ft_list_push_front(&res, "front2");
// 	printf("%s\n", (char *)ft_list_last(res)->data);
// }
