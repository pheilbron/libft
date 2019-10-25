/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pheilbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 15:09:54 by pheilbro          #+#    #+#             */
/*   Updated: 2019/10/25 15:11:59 by pheilbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_string.h"

void	*ft_memdup(const void *src, size_t size)
{
	void	*dest;

	if (!(dest = malloc(sizeof(*dest) * size)))
		return (NULL);
	ft_memcpy(dest, src, size);
	return (dest);
}
