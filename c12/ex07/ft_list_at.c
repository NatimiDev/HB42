/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 20:59:41 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/26 16:15:28 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

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

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*res;
	unsigned int	i;

	if ((unsigned int)ft_list_size(begin_list) <= nbr)
		return (NULL);
	res = begin_list;
	i = 0;
	while (i < nbr)
	{
		res = res->next;
		i++;
	}
	return (res);
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

// int	main(void)
// {
// 	t_list	*res;

// 	res = ft_create_elem("el3");
// 	ft_list_push_front(&res, "el2");
// 	ft_list_push_front(&res, "el1");
// 	ft_list_push_front(&res, "el0");
// 	printf("%s\n", (char *) ft_list_at(res, 2)->data);
// }
