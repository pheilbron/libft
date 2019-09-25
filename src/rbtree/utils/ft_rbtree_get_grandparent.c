/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rbtree_get_grandparent.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pheilbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 09:00:35 by pheilbro          #+#    #+#             */
/*   Updated: 2019/09/25 09:00:37 by pheilbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_rbtree_utils.h"

t_rb_node	*ft_rbtree_get_grandparent(t_rb_node *n)
{
	t_rb_node	*parent;

	if ((parent = ft_rbtree_get_parent(n)))
		return (ft_rbtree_get_parent(parent));
	return (NULL);
}
