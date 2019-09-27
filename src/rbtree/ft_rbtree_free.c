/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rbtree_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pheilbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 09:59:25 by pheilbro          #+#    #+#             */
/*   Updated: 2019/09/26 10:07:11 by pheilbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_rbtree.h"

static void	traverse(t_rb_node *n)
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

void		ft_rbtree_free(t_rbtree *tree)
{
	traverse(tree->root);
	free(tree);
}
