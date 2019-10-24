/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pheilbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 20:48:17 by pheilbro          #+#    #+#             */
/*   Updated: 2019/10/23 20:51:24 by pheilbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"
#include "ft_ctype.h"

long long	ft_atoll(const char *str)
{
	size_t		i;
	int			sign;
	long long	ret;

	i = 0;
	sign = 1;
	ret = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
		sign = (str[i++] == '-' ? -1 : 1);
	while (ft_isdigit(str[i]))
		ret = (ret * 10) + ((str[i++] - '0') * sign);
	return (ret);
}
