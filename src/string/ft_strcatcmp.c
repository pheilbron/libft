/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcatcmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pheilbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 20:10:11 by pheilbro          #+#    #+#             */
/*   Updated: 2019/09/23 20:19:07 by pheilbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int	ft_strcatcmp(const char *s1a, const char *s1b, const char *s2a,
		const char *s2b)
{
	const char	*s2;

	s2 = s2a;
	while (*s1a)
	{
		if (!*s2)
			s2 = s2b;
		if (*s1a != *s2)
			return ((unsigned char)*s1a - (unsigned char)*s2);
		s1a++;
		s2++;
	}
	while (*s1b)
	{
		if (*s1b != *s2)
			return ((unsigned char)*s1b - (unsigned char)*s2);
		s1b++;
		s2++;
	}
	return ((unsigned char)*s1b - (unsigned char)*s2);
}
