/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 19:55:25 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/28 17:19:57 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

int	btree_level_count(t_btree *root)
{
	int	level_left;
	int	level_right;

	if (!root)
		return (0);
	level_left = btree_level_count(root->left);
	level_right = btree_level_count(root->right);
	if (level_left > level_right)
		return (level_left + 1);
	else
		return (level_right + 1);
}

// t_btree	*btree_create_node(void *item)
// {
// 	t_btree	*btree;

// 	btree = malloc(sizeof(t_btree));
//	if (!btree)
//		return (NULL);
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
// 	node1->left = node3;
// 	node1->right = node4;
// 	node3->right = node2;
// 	print_btree(btree, 0);
// 	printf("Height = %d\n", btree_level_count(btree));
// }
