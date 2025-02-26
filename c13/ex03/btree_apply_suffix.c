/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:16:06 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/26 17:57:17 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	btree_apply_suffix(root->left, applyf);
	btree_apply_suffix(root->right, applyf);
	(*applyf)(root->item);
}

// void	ft_ft(void *data)
// {
// 	int	*int_ptr;

// 	int_ptr = NULL;
// 	if (data)
// 	{
// 		int_ptr = (int *)data;
// 		*int_ptr = *int_ptr + 1;
// 	}
// }

// t_btree	*btree_create_node(void *item)
// {
// 	t_btree	*btree;

// 	btree = malloc(sizeof(t_btree));
// 	btree->item = item;
// 	btree->left = NULL;
// 	btree->right = NULL;
// 	return (btree);
// }

// #include <stdio.h>

// void	print_btree(t_btree *root, int space)
// {
// 	int	i;

// 	i = 5;
// 	if (root == NULL)
// 		return ;
// 	space += 5;
// 	print_btree(root->right, space);
// 	printf("\n");
// 	while (i < space)
// 	{
// 		printf(" ");
// 		i++;
// 	}
// 	if (root->item)
// 		printf("%d\n", *((int *)root->item));
// 	else
// 		printf("empty");
// 	print_btree(root->left, space);
// }

// int	main(void)
// {
// 	t_btree	*btree;
// 	t_btree	*node1;
// 	t_btree	*node2;
// 	t_btree	*node3;
// 	t_btree	*node4;
// 	int		a = 10;
// 	int		b = 5;
// 	int		c = 12;
// 	int		d = 3;
// 	int		e = 7;

// 	btree = btree_create_node(&a);
// 	node1 = btree_create_node(&b);
// 	node2 = btree_create_node(&c);
// 	node3 = btree_create_node(&d);
// 	node4 = btree_create_node(&e);
// 	btree->left = node1;
// 	btree->right = node2;
// 	node1->left = node3;
// 	node1->right = node4;
// 	print_btree(btree, 0);
// 	btree_apply_suffix(btree, ft_ft);
// 	print_btree(btree, 0);
// }
