/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pheilbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 13:19:50 by pheilbro          #+#    #+#             */
/*   Updated: 2019/10/25 14:21:44 by pheilbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stack.h"

void	*ft_stack_pop(t_stack *stack)
{
	t_dl_node	*temp;
	void		*content;

	if (ft_stack_is_empty(stack))
		return (NULL);
	content = stack->top->content;
	temp = stack->top;
	stack->top = temp->next;
	if (stack->top)
		temp->next->prev = NULL;
	else
		stack->bottom = NULL;
	free(temp);
	return (content);
}
