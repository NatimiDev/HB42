/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:39:05 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/26 16:25:32 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	t_btree	*ref;
	t_btree	*prev;
	t_btree	*new_node;

	if (!root || !item || !cmpf)
		return ;
	new_node = btree_create_node(item);
	if (*root == NULL)
	{
		*root = new_node;
		return ;
	}
	ref = *root;
	while (ref)
	{
		prev = ref;
		if ((*cmpf)(ref->item, item) > 0)
			ref = ref->left;
		else
			ref = ref->right;
	}
	if ((*cmpf)(prev->item, item) > 0)
		prev->left = new_node;
	else
		prev->right = new_node;
}

// #include <stdio.h>

// t_btree	*btree_create_node(void *item)
// {
// 	t_btree	*btree;

// 	btree = malloc(sizeof(t_btree));
// 	btree->item = item;
// 	btree->left = NULL;
// 	btree->right = NULL;
// 	return (btree);
// }

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
// 		if (*int_ptr > *int_ref)
// 			return (1);
// 	}
// 	return (0);
// }

// int	main(void)
// {
// 	t_btree	*btree;
// 	int		a = 10;
// 	int		b = 5;
// 	int		c = 12;
// 	int		d = 3;
// 	int		e = 7;

// 	btree = NULL;
// 	btree_insert_data(&btree, &a, ft_cmp);
// 	btree_insert_data(&btree, &b, ft_cmp);
// 	btree_insert_data(&btree, &c, ft_cmp);
// 	btree_insert_data(&btree, &d, ft_cmp);
// 	btree_insert_data(&btree, &e, ft_cmp);
// 	print_btree(btree, 0);
// }
