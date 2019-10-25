/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pheilbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 13:14:13 by pheilbro          #+#    #+#             */
/*   Updated: 2019/10/25 14:26:27 by pheilbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STACK_H
# define FT_STACK_H

# include "ft_node.h"

typedef struct	s_stack
{
	t_dl_node	*top;
	t_dl_node	*bottom;
	int			size;
}				t_stack;

int				ft_stack_is_empty(t_stack *stack);
t_stack			*ft_stack_init(void);
void			ft_stack_enqueue(t_stack *stack, void *content);
t_dl_node		*ft_stack_get_next(t_dl_node *node);
t_dl_node		*ft_stack_get_prev(t_dl_node *node);
void			*ft_stack_push(t_stack *stack, void *content);
void			*ft_stack_pop(t_stack *stack);
void			*ft_stack_drop(t_stack *stack);
void			*ft_stack_peek(t_stack *stack);
void			ft_stack_del(t_stack *stack, void (*del)(void *));

#endif
