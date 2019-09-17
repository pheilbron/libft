
#include <stdargs.h>
#include "ft_error.h"

void	ft_error_new(t_error *e, int errno, ...)
{
	va_list ap;

	if (errno == 0)
	{
		e->no = 0;
		e->data = NULL;
	}
	else
	{
		va_start(ap, errno);
		e->no = va_arg(ap, int);
		e->data = va_arg(ap, char *);
		if (errno == 3)
			e->aux_data = va_arg(ap, char *);
		va_end(ap);
	}
}
