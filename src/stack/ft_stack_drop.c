/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_drop.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pheilbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 13:51:49 by pheilbro          #+#    #+#             */
/*   Updated: 2019/09/08 13:55:06 by pheilbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stack.h"

void	*ft_stack_drop(t_stack *stack)
{
	t_dl_node	*temp;
	void		*content;

	if (ft_stack_is_empty(stack))
		return (NULL);
	content = stack->bottom->content;
	temp = stack->bottom;
	stack->bottom = temp->prev;
	if (!(stack->bottom))
		stack->top = NULL;
	free(temp);
	return (content);
}
