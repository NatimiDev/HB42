/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:01:38 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/26 19:51:45 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	void	*data_found;

	if (!root || !data_ref || !cmpf)
		return (NULL);
	data_found = btree_search_item(root->left, data_ref, cmpf);
	if (data_found)
		return (data_found);
	if ((*cmpf)(root->item, data_ref) == 0)
		return (root->item);
	return (btree_search_item(root->right, data_ref, cmpf));
}

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

// int	ft_cmp(void *data_ptr, void *data_ref)
// {
// 	int	*int_ptr = NULL;
// 	int	*int_ref = NULL;

// 	if (data_ptr && data_ref)
// 	{
// 		int_ptr = (int *)data_ptr;
// 		int_ref = (int *)data_ref;
// 		if (*int_ptr == *int_ref)
// 			return (0);
// 	}
// 	return (1);
// }

// int	main(void)
// {
// 	t_btree	*btree;
// 	t_btree	*node1;
// 	t_btree	*node2;
// 	t_btree	*node3;
// 	t_btree	*node4;
// 	t_btree	*data_found;
// 	int		a = 10;
// 	int		b = 5;
// 	int		c = 12;
// 	int		d = 3;
// 	int		e = 7;
// 	void	*data_ref = &e;

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
// 	btree = NULL;
// 	data_found = btree_search_item(btree, data_ref, ft_cmp);
// 	if (data_ref && data_found)
// 		printf("seached for %d, found %d\n", *((int *)data_ref),
// 			*((int *)data_found));
// }
