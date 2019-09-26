#include <stdlib.h>
#include "ft_rbtree.h"

t_rbtree	*ft_rbtree_init(void)
{
	t_rbtree	*tree;

	if (!(tree = malloc(sizeof(*tree))))
		return (NULL);
	tree->root = NULL;
}
