
#include <stdlib.h>
#include "ft_rbtree_utils.h"

void	ft_rbtree_rotate_right(t_rb_node *n)
{
	t_rb_node	*nnew;
	t_rb_node	*parent;

	if ((nnew = n->left))
	{
		n->left = nnew->right;
		nnew->right = n;
		n->parent = nnew;
		if (n->left)
			n->left->parent = n;
		if ((parent = ft_rbtree_get_parent(n)))
		{
			if (n == parent->left)
				parent->left = nnew;
			else if (n == parent->right)
				parent->right = nnew;
		}
		nnew->parent = parent;
	}
}
