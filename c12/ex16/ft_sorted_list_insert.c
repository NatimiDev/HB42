/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 20:38:56 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/25 10:13:55 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref,
	int (*cmp)(void *, void *))
{
	t_list	*tmp;

	if (!begin_list || !data_ref || !cmp)
		return (NULL);
	tmp = begin_list;
	while (tmp->next)
	{
		if ((*cmp)(tmp->next->data, data_ref) > 0)
			return (tmp);
		tmp = tmp->next;
	}
	return (tmp);
}

void	ft_sorted_list_insert(t_list **begin_list, void *data,
	int (*cmp)(void *, void *))
{
	t_list	*list_ref;
	t_list	*list_new;

	if (!begin_list || !data || !cmp)
		return ;
	list_new = ft_create_elem(data);
	if ((*cmp)((*begin_list)->data, data) > 0)
	{
		list_new->next = *begin_list;
		*begin_list = list_new;
		return ;
	}
	list_ref = ft_list_find(*begin_list, data, cmp);
	printf("%d \n", *((int *)list_ref->data));
	list_new->next = list_ref->next;
	list_ref->next = list_new;
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

// int	ft_cmp(void *data_ptr, void *data_ref)
// {
// 	int	*int_ptr = NULL;
// 	int	*int_ref = NULL;

// 	if (data_ptr && data_ref)
// 	{
// 		int_ptr = (int *)data_ptr;
// 		int_ref = (int *)data_ref;
// 		if (*int_ptr > *int_ref)
// 			return (1);
// 	}
// 	return (0);
// }

// int	main(void)
// {
// 	t_list	*res;
// 	t_list	*tmp;
// 	void	*data_ref;
// 	int		a = 45;
// 	int		b = 55;
// 	int		c = 65;
// 	int		d = 75;
// 	int		r = 700;

// 	data_ref = &r;
// 	res = ft_create_elem(&d);
// 	ft_list_push_front(&res, &c);
// 	ft_list_push_front(&res, &b);
// 	ft_list_push_front(&res, &a);
// 	tmp = res;
// 	printf("Original list: ");
// 	while (tmp)
// 	{
// 		printf("%d, ", *((int *) tmp->data));
// 		tmp = tmp->next;
// 	}
// 	printf("\nAfter insertion: ");
// 	ft_sorted_list_insert(&res, data_ref, ft_cmp);
// 	while (res)
// 	{
// 		printf("%d, ", *((int *) res->data));
// 		res = res->next;
// 	}
// }