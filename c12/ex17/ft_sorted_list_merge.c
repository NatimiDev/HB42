/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 15:00:07 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/26 10:54:54 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
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

t_list	*ft_sorted_list_insert(t_list **begin_list, void *data,
	int (*cmp)(void *, void *))
{
	t_list	*list_ref;
	t_list	*list_new;

	if (!begin_list || !data || !cmp)
		return (NULL);
	list_new = ft_create_elem(data);
	if ((*cmp)((*begin_list)->data, data) > 0)
	{
		list_new->next = *begin_list;
		*begin_list = list_new;
		return (list_new);
	}
	list_ref = ft_list_find(*begin_list, data, cmp);
	list_new->next = list_ref->next;
	list_ref->next = list_new;
	return (list_new);
}

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
	int (*cmp)(void *, void *))
{
	t_list	*list_ptr1;
	t_list	*list_ptr2;

	if (!begin_list1 || !begin_list2 || !cmp)
		return ;
	if (!(*begin_list1))
	{
		*begin_list1 = begin_list2;
		return ;
	}
	list_ptr1 = NULL;
	list_ptr2 = begin_list2;
	while (list_ptr2)
	{
		if (!list_ptr1)
			list_ptr1 = ft_sorted_list_insert(begin_list1, list_ptr2->data,
					cmp);
		else
			list_ptr1 = ft_sorted_list_insert(&list_ptr1, list_ptr2->data, cmp);
		list_ptr2 = list_ptr2->next;
	}
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
// 	t_list	*res1;
// 	t_list	*tmp;
// 	int		a = 45;
// 	int		b = 55;
// 	int		c = 65;
// 	int		d = 75;

// 	res = ft_create_elem(&d);
// 	ft_list_push_front(&res, &b);
// 	res1 = ft_create_elem(&c);
// 	ft_list_push_front(&res1, &a);
// 	tmp = res;
// 	printf("Original list: ");
// 	while (tmp)
// 	{
// 		printf("%d, ", *((int *) tmp->data));
// 		tmp = tmp->next;
// 	}
// 	printf("\nAfter insertion: ");
// 	ft_sorted_list_merge(&res, res1, ft_cmp);
// 	while (res)
// 	{
// 		printf("%d, ", *((int *) res->data));
// 		res = res->next;
// 	}
// }
