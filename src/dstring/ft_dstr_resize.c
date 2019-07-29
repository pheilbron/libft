/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dstr_extend.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pheilbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 07:58:44 by pheilbro          #+#    #+#             */
/*   Updated: 2019/07/28 23:10:19 by pheilbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dstring.h"

t_dstring	*ft_dstr_extend(t_dstring *s, size_t len)
{
	t_dstring	*temp;

	temp = ft_dstr_new(s->buf,
			(s->pos < len ? s->pos : len),
			(s->pos < len ? s->pos : len));
	ft_dstr_free(s);
	s = ft_dstr_new(temp->buf, temp->pos, len);
	ft_dstr_free(temp);
	return (s);
}
