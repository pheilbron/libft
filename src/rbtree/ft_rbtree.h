/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rbtree.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pheilbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 20:54:07 by pheilbro          #+#    #+#             */
/*   Updated: 2019/09/09 21:02:52 by pheilbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RBTREE_H
# define FT_BRBTREE_H

enum e_color
{
	BLACK,
	RED
};

typedef struct	s_rb_node
{
	struct s_rb_node	*parent;
	struct s_rb_node	*left;
	struct s_rb_node	*right;
	enum e_color		color;
	void				*data;
}				t_rb_node;

typedef struct	s_rbtree
{
	t_rb_node	*root;
	void		(*sort)();
}				t_rbtree;

#endif
