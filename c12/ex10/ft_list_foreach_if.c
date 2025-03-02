/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 20:17:10 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/26 16:16:00 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void
*data_ref, int (*cmp)(void *, void*))
{
	t_list	*tmp;

	if (!begin_list || !f || !data_ref || !cmp)
		return ;
	tmp = begin_list;
	while (tmp)
	{
		if ((*cmp)(tmp->data, data_ref) == 0)
			(*f)(tmp->data);
		tmp = tmp->next;
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

// 	res = malloc(sizeof(t_list));
// 	res->next = NULL;
// 	res->data = data;
// 	return (res);
// }

// void	ft_ft(void *data)
// {
// 	int	*int_ptr = NULL;

// 	if (data)
// 	{
// 		int_ptr = (int *)data;
// 		*int_ptr = *int_ptr + 1;
// 	}
// }

// int	ft_cmp(void *data_ptr, void *data_ref)
// {
// 	int	*int_ptr = NULL;
// 	int	*int_ref = NULL;

// 	if (data_ptr && data_ref)
// 	{
// 		int_ptr = (int *)data_ptr;
// 		int_ref = (int *)data_ref;
// 		return (*int_ptr > *int_ref);
// 	}
// 	return (1);
// }

// int	main(void)
// {
// 	t_list	*res;
// 	int		a = 45;
// 	int		b = 55;
// 	int		c = 65;
// 	int		d = 75;
// 	int		r = 60;
// 	void	*data_ref;

// 	data_ref = &r;
// 	res = ft_create_elem(&d);
// 	ft_list_push_front(&res, &c);
// 	ft_list_push_front(&res, &b);
// 	ft_list_push_front(&res, &a);
// 	printf("%d\n", *((int *) res->data));
// 	ft_list_foreach_if(res, ft_ft, data_ref, ft_cmp);
// 	while (res)
// 	{
// 		printf("%d\n", *((int *) res->data));
// 		res = res->next;
// 	}
// }
