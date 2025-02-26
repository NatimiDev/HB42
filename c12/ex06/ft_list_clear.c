/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:44:41 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/26 16:15:06 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*tmp;
	t_list	*next;

	tmp = begin_list;
	while (tmp)
	{
		next = tmp->next;
		free_fct(tmp);
		tmp = next;
	}
}

// #include <stdlib.h>
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

// 	res = malloc(sizeof(t_list));
// 	res->next = NULL;
// 	res->data = data;
// 	return (res);
// }

// int	main(void)
// {
// 	t_list	*res;

// 	res = ft_create_elem("hihi");
// 	ft_list_push_front(&res, "front");
// 	printf("%s\n", (char *)res->data);
// 	printf("%s\n", (char *)res->next->data);
// 	ft_list_clear(res, &free);
// 	printf("%s\n", (char *)res->data);
// }
