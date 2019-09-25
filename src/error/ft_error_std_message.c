/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_std_message.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pheilbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 08:33:41 by pheilbro          #+#    #+#             */
/*   Updated: 2019/09/25 12:32:05 by pheilbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_error.h"
#include "ft_dstring.h"

t_error	g_std_error_tab[] =
{
	{INV_COMMAND, "'%s' is an invalid command.", ""},
	{INV_OPTION, "illegal option -- %.1s", ""},
	{INV_LONG_OPTION, "illegal option -- %s", ""},
	{INV_FILE, "%s: No such file or directory", ""},
	{INV_DIR, "%s: Is a directory", ""},
	{MISSING_ARG, "%s: option requires an argument -- %s", ""}
};

char	*ft_error_std_message(char *program_name, t_error e)
{
	t_dstring	*s;
	int			i;

	s = ft_dstr_init();
	i = 0;
	if (program_name)
		ft_dstr_addf(s, "%s: ", program_name);
	while (g_std_error_tab[i].no && g_std_error_tab[i].no != e.no)
		i++;
	if (g_std_error_tab[i].no == e.no)
		ft_dstr_addf(s, g_std_error_tab[i].data, e.data, e.aux_data);
	return (ft_dstr_release(s));
}

void	ft_error_print_std_message(char *program_name, t_error e)
{
	t_dstring	*s;
	int			i;

	s = ft_dstr_init();
	i = 0;
	if (program_name)
		ft_dstr_addf(s, "%s: ", program_name);
	while (g_std_error_tab[i].no && g_std_error_tab[i].no != e.no)
		i++;
	if (g_std_error_tab[i].no == e.no)
		ft_dstr_addf(s, g_std_error_tab[i].data, e.data, e.aux_data);
	write(1, s->buf, s->pos);
	write(1, "\n", 1);
	ft_dstr_free(s);
}
