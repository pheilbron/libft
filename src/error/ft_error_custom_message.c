/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_custom_message.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pheilbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 08:33:32 by pheilbro          #+#    #+#             */
/*   Updated: 2019/09/17 08:36:38 by pheilbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_error.h"
#include "ft_dstring.h"

char	*ft_error_custom_message(char *program_name, t_error e,
		t_error *error_tab)
{
	t_dstring	*s;
	int			i;

	s = ft_dstr_init();
	i = 0;
	if (program_name)
		ft_dstr_addf(s, "%s: ", program_name);
	while (error_tab[i].no && error_tab[i].no != e.no)
		i++;
	if (error_tab[i].no == e.no)
		ft_dstr_addf(s, error_tab[i].data, e.data, e.aux_data);
	return (ft_dstr_release(s));
}
