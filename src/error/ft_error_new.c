/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pheilbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 08:33:14 by pheilbro          #+#    #+#             */
/*   Updated: 2019/09/17 08:34:04 by pheilbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>
#include "ft_error.h"

int	ft_error_new(t_error *e, int errno, ...)
{
	va_list ap;

	if (errno == 0)
	{
		e->no = 0;
		e->data = NULL;
	}
	else
	{
		va_start(ap, errno);
		e->no = va_arg(ap, int);
		e->data = va_arg(ap, char *);
		if (errno == 3)
			e->aux_data = va_arg(ap, char *);
		va_end(ap);
	}
	return (e->no);
}
