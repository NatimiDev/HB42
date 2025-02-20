/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 15:15:40 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/20 15:33:44 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*res;

	res = ft_create_elem(data);
	res->next = *begin_list;
	*begin_list = res;
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*res;

	if (size < 1 || !strs)
		return (NULL);
	res = ft_create_elem(strs[0]);
	i = 1;
	while (i < size)
	{
		ft_list_push_front(&res, strs[i]);
		i++;
	}
	return (res);
}

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
// 	char	*strs[3];
// 	t_list	*res;

// 	strs[0] = "1";
// 	strs[1] = "2";
// 	strs[2] = "3";
// 	res = ft_list_push_strs(3, strs);
// 	printf("%s\n", (char *)res->data);
// 	printf("%s\n", (char *)res->next->data);
// 	printf("%s\n", (char *)res->next->next->data);
// }
