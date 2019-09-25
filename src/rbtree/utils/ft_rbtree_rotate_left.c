
#include <stdlib.h>
#include "ft_rbtree_utils.h"

void	ft_rbtree_rotate_left(t_rb_node *n)
{
	t_rb_node	*nnew;
	t_rb_node	*parent;

	if ((nnew = n->right))
	{
		n->right = nnew->left;
		nnew->left = n;
		n->parent = nnew;
		if (n->right)
			n->right->parent = n;
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
