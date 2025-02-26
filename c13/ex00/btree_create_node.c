/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:02:10 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/26 16:29:16 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree	*btree;

	btree = malloc(sizeof(t_btree));
	btree->item = item;
	btree->left = NULL;
	btree->right = NULL;
	return (btree);
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_btree	*btree;
// 	void	*item;
// 	int		a;

// 	a = 10;
// 	item = &a;
// 	btree = btree_create_node(item);
// 	if (btree)
// 	{
// 		printf("%i\n", *((int *)btree->item));
// 	}
// }
