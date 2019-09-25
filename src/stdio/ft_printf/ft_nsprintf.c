/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nsprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pheilbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 10:29:26 by pheilbro          #+#    #+#             */
/*   Updated: 2019/09/25 10:30:54 by pheilbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_dstring.h"
#include "ft_string.h"

int	ft_nsprintf(char *str, const char *format, ...)
{
	va_list		ap;
	int			i;
	t_dstring	*s;

	va_start(ap, format);
	i = 0;
	s = ft_dstr_init();
	while (format[i])
	{
		if (is_con_indicator(format[i]))
		{
			ft_dstr_add(s, (char *)format, i);
			format += i;
			i = 0;
			(*g_convert((char *)format, i))(s, &format, &i, &ap);
		}
		else
			i++;
	}
	ft_dstr_add(s, (char *)format, i);
	str = ft_dstr_release(s);
	va_end(ap);
	return (1);
}
