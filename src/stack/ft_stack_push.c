/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pheilbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 13:23:01 by pheilbro          #+#    #+#             */
/*   Updated: 2019/09/08 13:36:41 by pheilbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stack.h"

void	*ft_stack_push(t_stack *stack, void *content)
{
	t_dl_node	*new;

	if ((new = malloc(sizeof(*new))))
	{
		new->content = content;
		new->prev = NULL;
		if (!ft_stack_is_empty(stack))
			new->next = stack->top;
		else
		{
			new->next = NULL;
			stack->bottom = new;
		}
		stack->top = new;
	}
	return (content);
}
