/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmikuka <nmikuka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 20:54:13 by nmikuka           #+#    #+#             */
/*   Updated: 2025/02/28 17:25:24 by nmikuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_list	*ft_create_elem(t_btree *node, int level, int is_first)
{
	t_list	*res;

	res = malloc(sizeof(t_list));
	if (res == NULL)
		return (NULL);
	res->next = NULL;
	res->node = node;
	res->level = level;
	res->is_first = is_first;
	return (res);
}

int	ft_list_push_back(t_list **begin_list, t_btree *node,
	int level, int is_first)
{
	t_list	*res;
	t_list	*last;

	if (!node)
		return (0);
	last = *begin_list;
	while (last && last->next)
		last = last->next;
	res = ft_create_elem(node, level, is_first);
	if (!last)
		*begin_list = res;
	else
		last->next = res;
	return (1);
}

void	ft_list_remove(t_list **node)
{
	t_list	*tmp;

	tmp = *node;
	if (tmp)
	{
		*node = (*node)->next;
		free(tmp);
	}
}

void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item,
		int current_level, int is_first_elem))
{
	t_list	*list;
	t_btree	*node;
	int		prev_level;
	int		is_added;

	list = NULL;
	if (!root)
		return ;
	prev_level = -1;
	ft_list_push_back(&list, root, 0, 1);
	while (list)
	{
		node = list->node;
		if (prev_level != list->level)
			is_added = 0;
		(*applyf)(node->item, list->level, list->is_first);
		is_added = ft_list_push_back(&list, node->left, list->level + 1,
				!is_added);
		is_added = ft_list_push_back(&list, node->right, list->level + 1,
				!is_added);
		prev_level = list->level;
		ft_list_remove(&list);
	}
}

// t_btree	*btree_create_node(void *item)
// {
// 	t_btree	*btree;

// 	btree = malloc(sizeof(t_btree));
// 	if (!btree)
// 		return (NULL);
// 	btree->item = item;
// 	btree->left = NULL;
// 	btree->right = NULL;
// 	return (btree);
// }

// #include <stdio.h>

// void	ft_print(void *item, int current_level, int is_first_elem)
// {
// 	int	*int_ptr;

// 	int_ptr = NULL;
// 	if (item)
// 	{
// 		int_ptr = (int *)item;
// 		printf("Data: %d Level: %d First Elem: %d\n", *int_ptr,
// 				current_level, is_first_elem);
// 	}
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

// int	main(void)
// {
// 	t_btree	*btree;
// 	int		a = 10;
// 	int		b = 5;
// 	int		c = 12;
// 	int		d = 3;
// 	int		e = 7;

// 	btree = btree_create_node(&a);
// 	btree->left = btree_create_node(&b);
// 	btree->right = btree_create_node(&c);
// 	btree->right->right = btree_create_node(&d);
// 	btree->right->left = btree_create_node(&e);
// 	btree->left->right = btree_create_node(&e);
// 	print_btree(btree, 0);
// 	btree_apply_by_level(btree, ft_print);
// }
