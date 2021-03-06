/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pheilbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 19:18:55 by pheilbro          #+#    #+#             */
/*   Updated: 2019/09/25 19:19:30 by pheilbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

long double	ft_pow(long double base, long double exp)
{
	long double	i;
	long double	ret;

	i = 0;
	ret = 1;
	while (i++ < exp)
		ret *= base;
	return (ret);
}
