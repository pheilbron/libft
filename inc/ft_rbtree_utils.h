/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rbtree_utils.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pheilbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 09:00:11 by pheilbro          #+#    #+#             */
/*   Updated: 2019/09/25 09:00:13 by pheilbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RBTREE_UTILS_H
# define FT_RBTREE_UTILS_H

# include "ft_rbtree.h"

t_rb_node	*ft_rbtree_get_parent(t_rb_node *n);
t_rb_node	*ft_rbtree_get_grandparent(t_rb_node *n);
t_rb_node	*ft_rbtree_get_sibling(t_rb_node *n);
t_rb_node	*ft_rbtree_get_uncle(t_rb_node *n);
void		ft_rbtree_rotate_left(t_rb_node *n);
void		ft_rbtree_rotate_right(t_rb_node *n);

#endif
