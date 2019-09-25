/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rbtree_insert.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pheilbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 09:00:25 by pheilbro          #+#    #+#             */
/*   Updated: 2019/09/25 09:03:07 by pheilbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_rbtree.h"
#include "ft_rbtree_utils.h"

static void	insert_recurse(t_rb_node *root, t_rb_node *n, int (*compare)())
{
	if (root && (*compare)(n->data, root->data) < 0)
	{
		if (root->left)
		{
			insert_recurse(root->left, n, compare);
			return ;
		}
		else
			root->left = n;
	}
	else if (root)
	{
		if (root->right)
		{
			insert_recurse(root->right, n, compare);
			return ;
		}
		else
			root->right = n;
	}
	n->parent = root;
	n->left = NULL;
	n->right = NULL;
	n->color = RED;
}

static void	insert_repair_tree_helper(t_rb_node *n)
{
	t_rb_node	*parent;
	t_rb_node	*grandparent;

	parent = ft_rbtree_get_parent(n);
	grandparent = ft_rbtree_get_grandparent(n);
	if (n == parent->right && parent == grandparent->left)
	{
		ft_rbtree_rotate_left(parent);
		n = n->left;
	}
	else if (n == parent->left && parent == grandparent->right)
	{
		ft_rbtree_rotate_right(parent);
		n = n->right;
	}
	if (n == parent->left)
		ft_rbtree_rotate_right(grandparent);
	else
		ft_rbtree_rotate_left(grandparent);
	parent->color = BLACK;
	grandparent->color = RED;
}

static void	insert_repair_tree(t_rb_node *n)
{
	t_rb_node	*parent;
	t_rb_node	*uncle;
	t_rb_node	*grandparent;

	if (!(parent = ft_rbtree_get_parent(n)))
		n->color = BLACK;
	else if (parent->color == BLACK)
		return ;
	else if ((uncle = ft_rbtree_get_uncle(n)) && uncle->color == RED)
	{
		parent->color = BLACK;
		uncle->color = BLACK;
		grandparent = ft_rbtree_get_parent(parent);
		grandparent->color = RED;
		insert_repair_tree(grandparent);
	}
	else
		insert_repair_tree_helper(n);
}

t_rb_node	*ft_rbtree_insert(t_rbtree *tree, t_rb_node *n)
{
	insert_recurse(tree->root, n, tree->compare);
	insert_repair_tree(n);
	tree->root = n;
	while (ft_rbtree_get_parent(tree->root))
		tree->root = ft_rbtree_get_parent(tree->root);
	return (tree->root);
}
