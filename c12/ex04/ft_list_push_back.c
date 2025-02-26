/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 10:25:47 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/26 16:14:16 by nmikuka          ###   ########.fr       */
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

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*res;
	t_list	*last;

	last = ft_list_last(*begin_list);
	res = ft_create_elem(data);
	if (!last)
		*begin_list = res;
	else
		last->next = res;
}

// #include <stdlib.h>
// #include <stdio.h>

// t_list	*ft_create_elem(void *data)
// {
// 	t_list	*res;

// 	res = malloc(sizeof(t_list));
// 	res->next = NULL;
// 	res->data = data;
// 	return (res);
// }

// int	main(void)
// {
// 	t_list	*res;

// 	res = ft_create_elem("hihi");
// 	res = NULL;
// 	ft_list_push_back(&res, "back");
// 	printf("%s\n", (char *)res->data);
// 	printf("%s\n", (char *)res->next->data);
// 	printf("%s\n", (char *)res->next->next);
// }
