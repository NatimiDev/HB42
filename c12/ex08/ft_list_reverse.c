/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 11:06:10 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/21 11:40:29 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*prev;
	t_list	*curr;
	t_list	*next;

	curr = *begin_list;
	if (!curr)
		return ;
	prev = NULL;
	next = NULL;
	while (curr->next)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*begin_list = curr;
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

// 	res = ft_create_elem("el3");
// 	ft_list_push_front(&res, "el2");
// 	ft_list_push_front(&res, "el1");
// 	ft_list_push_front(&res, "el0");
// 	printf("%s\n", (char *) res->data);
// 	ft_list_reverse(&res);
// 	printf("%s\n", (char *) res->data);
// }
