
#include "ft_printf.h"
#include "ft_dstring.h"

int	ft_fprintf(int fd, const char *format, ...)
{
	va_list		ap;
	int			i;
	t_dstring	*s;

	va_start(ap, format);
	i = 0;
	s = ft_dstr_init();
	while (*format && format[i])
	{
		if (is_con_indicator(format[i]))
		{
			ft_dstr_add(s, (char *)format, i);
			format += i;
			i = 0;
			(*g_convert((char *)format, i))(s, &format, &i, &ap);
		}
		else
			i++;
	}
	ft_dstr_add(s, (char *)format, i);
	write(fd, s->buf, s->pos);
	va_end(ap);
	return (ft_dstr_free(s));
}
