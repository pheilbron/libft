/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dstr_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pheilbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 07:59:40 by pheilbro          #+#    #+#             */
/*   Updated: 2019/09/26 10:02:04 by pheilbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dstring.h"
#include "ft_string.h"
#include "ft_stdlib.h"

t_dstring	*ft_dstr_new(char *data, size_t len, size_t cap)
{
	t_dstring	*s;

	if ((s = malloc(sizeof(*s))))
	{
		if ((s->buf = ft_memalloc(sizeof(*data) *
						((cap > len ? cap : len) + 1))))
		{
			ft_memcpy(s->buf, data, len);
			s->buf[len] = '\0';
			s->cap = (cap > len ? cap : len);
			s->pos = len;
			return (s);
		}
	}
	return (NULL);
}
