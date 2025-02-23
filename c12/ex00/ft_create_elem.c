/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 10:10:06 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/23 22:24:39 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*res;

	res = malloc(sizeof(t_list *));
	if (res == NULL)
		return (NULL);
	res->next = NULL;
	res->data = data;
	return (res);
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*res;

// 	res = ft_create_elem("hihi");
// 	printf("%s\n", (char *)res->data);
// }
