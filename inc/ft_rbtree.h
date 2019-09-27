/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rbtree.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pheilbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 20:54:07 by pheilbro          #+#    #+#             */
/*   Updated: 2019/09/26 10:11:54 by pheilbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RBTREE_H
# define FT_RBTREE_H

enum	e_color
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
	void				*content;
}				t_rb_node;

typedef struct	s_rbtree
{
	t_rb_node	*root;
	int			(*compare)();
}				t_rbtree;

t_rbtree		*ft_rbtree_init(void);
t_rb_node		*ft_rbtree_insert(t_rbtree *root, t_rb_node *n);
t_rb_node		*ft_rbtree_new_node(void *content);
void			ft_rbtree_free(t_rbtree *tree);

#endif
