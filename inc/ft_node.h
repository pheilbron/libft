/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_node.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pheilbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 13:13:11 by pheilbro          #+#    #+#             */
/*   Updated: 2019/09/23 20:23:30 by pheilbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_NODE_H
# define FT_NODE_H

typedef struct	s_node
{
	void			*content;
	struct s_node	*next;
}				t_node;

typedef struct	s_dl_node
{
	void				*content;
	struct s_dl_node	*next;
	struct s_dl_node	*prev;
}				t_dl_node;

#endif
