/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_enqueue.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pheilbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 13:28:46 by pheilbro          #+#    #+#             */
/*   Updated: 2019/09/08 13:31:47 by pheilbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stack.h"

void	ft_stack_enqueue(t_stack *stack, void *content)
{
	t_dl_node	*new;

	if ((new = malloc(sizeof(*new))))
	{
		new->content = content;
		new->next = NULL;
		if (ft_stack_is_empty(stack))
		{
			stack->top = new;
			new->prev = NULL;
		}
		else
		{
			stack->bottom->next = new;
			new->prev = stack->bottom;
		}
		stack->bottom = new;
	}
}
