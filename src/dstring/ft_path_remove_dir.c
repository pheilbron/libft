/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path_remove_dir.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pheilbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 10:00:31 by pheilbro          #+#    #+#             */
/*   Updated: 2019/09/26 10:00:34 by pheilbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dstring.h"
#include "ft_string.h"

void	ft_path_remove_dir(t_path *path)
{
	path->path->pos--;
	while (path->path->pos > 0 && path->path->buf[path->path->pos] != '/')
		path->path->pos--;
	path->path->buf[path->path->pos] = '\0';
}
