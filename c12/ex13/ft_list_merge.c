/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:45:27 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/24 15:56:21 by nmikuka          ###   ########.fr       */
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

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*last;

	if (!begin_list1 || !begin_list2)
		return ;
	last = ft_list_last(*begin_list1);
	last->next = begin_list2;
}

// #include <stdio.h>
// #include <stdlib.h>

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
// 	t_list	*res1;
// 	t_list	*res2;
// 	t_list	*tmp;
// 	int		a = 45;
// 	int		b = 55;
// 	int		c = 65;
// 	int		d = 75;

// 	res1 = ft_create_elem(&d);
// 	res2 = ft_create_elem(&b);
// 	ft_list_push_front(&res2, &a);
// 	ft_list_push_front(&res2, &c);
// 	tmp = res1;
// 	printf("Original list: ");
// 	while (tmp)
// 	{
// 		printf("%d, ", *((int *) tmp->data));
// 		tmp = tmp->next;
// 	}
// 	printf("\nAfter merging: ");
// 	ft_list_merge(&res1, res2);
// 	while (res1)
// 	{
// 		printf("%d, ", *((int *) res1->data));
// 		res1 = res1->next;
// 	}
// }
