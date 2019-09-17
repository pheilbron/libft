/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pheilbro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 08:33:24 by pheilbro          #+#    #+#             */
/*   Updated: 2019/09/17 08:33:27 by pheilbro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ERROR_H
# define FT_ERROR_H

# define INV_COMMAND -1
# define INV_OPTION -2
# define INV_LONG_OPTION -3
# define INV_FILE -4
# define INV_DIR -5
# define MISSING_ARG -6
# define SYS_ERROR -7

typedef struct	s_error
{
	int		no;
	char	*data;
	char	*aux_data;
}				t_error;

t_error			*ft_error_init(int errno, ...);
void			ft_error_new(t_error *e, int errno, ...);
char			*ft_error_std_message(char *program_name, t_error e);
char			*ft_error_custom_message(char *program_name, t_error e,
		t_error *error_tab);

#endif
