/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rbtree_new_node.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pheilbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 09:55:44 by pheilbro          #+#    #+#             */
/*   Updated: 2019/09/25 12:33:10 by pheilbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_rbtree.h"

t_rb_node	*ft_rbtree_new_node(void *content)
{
	t_rb_node	*new;

	if (!(new = malloc(sizeof(*new))))
		return (NULL);
	new->content = content;
	new->parent = NULL;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
