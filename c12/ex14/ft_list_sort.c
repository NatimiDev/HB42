/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:59:31 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/24 17:33:50 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

/**  swap 2 elements, this function swaps elemente swap and swap->next
    prev is just a helper structure **/
void	ft_swap(t_list *prev, t_list *swap)
{
	t_list	*tmp;

	if (prev)
		prev->next = swap->next;
	tmp = swap->next->next;
	swap->next->next = swap;
	swap->next = tmp;
}

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

int	single_pass_sort(t_list **begin_list, int (*cmp)(void *, void *))
{
	t_list	*tmp;
	t_list	*prev;
	int		is_sorted;

	tmp = *begin_list;
	prev = NULL;
	is_sorted = 1;
	while (tmp)
	{
		if (tmp->next && (*cmp)(tmp->data, tmp->next->data) > 0)
		{
			if (!prev)
				*begin_list = tmp->next;
			ft_swap(prev, tmp);
			is_sorted = 0;
		}
		prev = tmp;
		tmp = tmp->next;
	}
	return (is_sorted);
}

void	ft_list_sort(t_list **begin_list, int (*cmp)(void *, void *))
{
	int		length;
	int		is_sorted;

	if (!begin_list || !cmp)
		return ;
	length = ft_list_size(*begin_list);
	is_sorted = 0;
	while (length > 0 && !is_sorted)
	{
		is_sorted = single_pass_sort(begin_list, cmp);
		length--;
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
// 	t_list	*tmp;
// 	int		a = 105;
// 	int		b = 55;
// 	int		c = 50;
// 	int		d = -1;

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
// 	printf("\nAfter sorting: ");
// 	ft_list_sort(&res, ft_cmp);
// 	while (res)
// 	{
// 		printf("%d, ", *((int *) res->data));
// 		res = res->next;
// 	}
// }