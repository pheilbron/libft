/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_del.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pheilbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 11:22:40 by pheilbro          #+#    #+#             */
/*   Updated: 2019/10/25 12:45:07 by pheilbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stack.h"

void	ft_stack_del(t_stack *stack, void (*del)(void *))
{
	while (!ft_stack_is_empty(stack))
		(*del)(ft_stack_pop(stack));
	free(stack);
}
