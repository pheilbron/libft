/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pheilbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 13:18:57 by pheilbro          #+#    #+#             */
/*   Updated: 2019/09/08 13:30:22 by pheilbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stack.h"

t_stack	*init(void)
{
	t_stack	*ret;

	if (!(ret = malloc(sizeof(*ret))))
		return (NULL);
	ret->top = NULL;
	ret->bottom = NULL;
	return (ret);
}
