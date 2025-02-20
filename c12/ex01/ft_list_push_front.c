/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 10:25:47 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/20 11:16:37 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*res;

	res = ft_create_elem(data);
	res->next = *begin_list;
	*begin_list = res;
}

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
// 	printf("%s\n", (char *)res->data);
// 	printf("%s\n", (char *)res->next->data);
// }
