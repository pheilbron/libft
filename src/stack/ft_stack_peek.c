/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_peek.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pheilbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 13:27:00 by pheilbro          #+#    #+#             */
/*   Updated: 2019/09/08 13:30:36 by pheilbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stack.h"

void	*ft_stack_peek(t_stack *stack)
{
	if (ft_stack_is_empty(stack))
		return (NULL);
	return (stack->top->content);
}
