
#include "ft_error.h"

char	*ft_error_custom_message(char *program_name, t_error e,
		t_error *error_tab)
{
	t_dstring	*s;
	int			i;

	s = ft_dstr_init();
	i = 0;
	if (program_name)
		ft_dstr_addf(s, "%s: ", program_name);
	while (error_tab[i].no && error_tab[i] != e.no)
		i++;
	if (error_tab[i].no == e.no)
		ft_dstr_addf(s, error_tab.data, e.data, e.aux_data);
	return (ft_dstr_release(s));
}
