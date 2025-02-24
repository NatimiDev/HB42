/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:47:57 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/24 20:37:53 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*prev;
	t_list	*curr;
	t_list	*next;
	void	*tmp;

	curr = begin_list;
	if (!curr)
		return ;
	prev = NULL;
	next = NULL;
	curr = curr->next;
	while (curr->next)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	begin_list->next->next = curr;
	begin_list->next = prev;
	tmp = begin_list->data;
	begin_list->data = curr->data;
	curr->data = tmp;
}

// #include <stdio.h>

// void	ft_list_push_front(t_list **begin_list, void *data)
// {
// 	t_list	*res;

// 	res = ft_create_elem(data);
// 	res->next = *begin_list;
// 	*begin_list = res;
// }

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
// 	t_list	*tmp;

// 	res = ft_create_elem("el3");
// 	ft_list_push_front(&res, "el2");
// 	ft_list_push_front(&res, "el1");
// 	ft_list_push_front(&res, "el0");
// 	ft_list_push_front(&res, "el-1");
// 	ft_list_push_front(&res, "el-2");
// 	ft_list_push_front(&res, "el-3");
// 	tmp = res;
// 	while (tmp)
// 	{
// 		printf("%s, ", (char *) tmp->data);
// 		tmp = tmp->next;
// 	}
// 	ft_list_reverse_fun(res);
// 	printf("\nReversed: ");
// 	while (res)
// 	{
// 		printf("%s, ", (char *) res->data);
// 		res = res->next;
// 	}
// }
