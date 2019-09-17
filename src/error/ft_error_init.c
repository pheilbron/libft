/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pheilbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 08:33:02 by pheilbro          #+#    #+#             */
/*   Updated: 2019/09/17 08:33:08 by pheilbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdarg.h>
#include "ft_error.h"

t_error	*ft_error_init(int errno, ...)
{
	t_error	*new;
	va_list	ap;

	if (!(new = malloc(sizeof(*new))))
		return (NULL);
	if (errno == 0)
	{
		new->no = 0;
		new->data = NULL;
	}
	else
	{
		va_start(ap, errno);
		new->no = va_arg(ap, int);
		new->data = va_arg(ap, char *);
		if (errno == 3)
			new->aux_data = va_arg(ap, char *);
		va_end(ap);
	}
	return (new);
}
