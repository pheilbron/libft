
#include "ft_error.h"

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
	while (g_std_error_tab[i].no && g_std_error_tab[i] != e.no)
		i++;
	if (g_std_error_tab[i].no == e.no)
		ft_dstr_addf(s, g_std_error_tab.data, e.data, e.aux_data);
	return (ft_dstr_release(s));
}
