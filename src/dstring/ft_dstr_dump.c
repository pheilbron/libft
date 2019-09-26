/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dstr_dump.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pheilbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 08:57:31 by pheilbro          #+#    #+#             */
/*   Updated: 2019/09/25 08:58:48 by pheilbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dstring.h"
#include "ft_string.h"

char	*ft_dstr_dump(t_dstring *s)
{
	if (s->pos == 0)
		return (ft_strdup(""));
	s->pos = 0;
	return (s->buf);
}
