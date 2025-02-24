/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:38:20 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/24 15:42:37 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 20:17:10 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/23 22:17:02 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
	int (*cmp)(void *, void*), void (*free_fct)(void *))
{
	t_list	*list_ptr;
	t_list	*prev;
	t_list	*tmp;

	if (!begin_list || !data_ref || !free_fct)
		return ;
	list_ptr = *begin_list;
	prev = NULL;
	while (list_ptr)
	{
		tmp = list_ptr;
		list_ptr = list_ptr->next;
		if ((*cmp)(tmp->data, data_ref) == 0)
		{
			if (prev)
				prev->next = tmp->next;
			else
				*begin_list = tmp->next;
			(*free_fct)(tmp);
		}
		else
			prev = tmp;
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
// 		if (*int_ptr < *int_ref)
// 			return (0);
// 	}
// 	return (1);
// }

// int	main(void)
// {
// 	t_list	*res;
// 	t_list	*tmp;
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
// 	tmp = res;
// 	printf("Original list: ");
// 	while (tmp)
// 	{
// 		printf("%d, ", *((int *) tmp->data));
// 		tmp = tmp->next;
// 	}
// 	printf("\nAfter removing: ");
// 	ft_list_remove_if(&res, data_ref, ft_cmp, free);
// 	while (res)
// 	{
// 		printf("%d, ", *((int *) res->data));
// 		res = res->next;
// 	}
// }
