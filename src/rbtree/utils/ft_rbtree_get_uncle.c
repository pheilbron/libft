
#include <stdlib.h>
#include "ft_rbtree_utils.h"

t_rb_node	*ft_rbtree_get_uncle(t_rb_node *n)
{
	t_rb_node	*parent;

	if ((parent = ft_rbtree_get_parent(n)) && ft_rbtree_get_grandparent(n))
		return (ft_rbtree_get_sibling(parent));
	return (NULL);
}
