#include "ft_rbtree.h"

static void	traverse(t_rb_node	*n)
{
	if (n)
	{
		if (n->left)
			traverse(n->left);
		if (n->right)
			traverse(n->right);
		free(n);
	}
}

void	ft_rbtree_free(t_rbtree *tree)
{
	traverse(tree->root);
	free(tree);
}
