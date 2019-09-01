/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lmodrotstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pheilbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 14:22:59 by pheilbro          #+#    #+#             */
/*   Updated: 2019/07/28 08:29:04 by pheilbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void	ft_lmodrotstr(char *s, size_t len, size_t mod)
{
	char	temp;
	size_t	i;

	i = 1;
	temp = s[0];
	while (i < len)
	{
		if (i % mod == 0)
			temp = s[i];
		else
		{
			s[i - 1] = s[i];
			if (i % mod == mod - 1)
				s[i] = temp;
		}
		i++;
	}
}
