
#include <stdlib.h>
#include "ft_rbtree_utils.h"

t_rb_node	*ft_rbtree_get_sibling(t_rb_node *n)
{
	t_rb_node	*parent;

	if ((parent = ft_rbtree_get_parent(n)))
	{
		if (n == parent->left)
			return (parent->right);
		return (parent->left);
	}
	return (NULL);
}
