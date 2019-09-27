/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rbtree_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pheilbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 09:59:12 by pheilbro          #+#    #+#             */
/*   Updated: 2019/09/26 10:06:48 by pheilbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_rbtree.h"

t_rbtree	*ft_rbtree_init(void)
{
	t_rbtree	*tree;

	if (!(tree = malloc(sizeof(*tree))))
		return (NULL);
	tree->root = NULL;
	return (tree);
}
