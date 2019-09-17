
#include <stdlib.h>
#include <stdargs.h>
#include "ft_error.h"

t_error	*ft_error_init(int errno, ...)
{
	t_error	*new;
	va_list	ap;

	if (!(new = malloc(sizeof(*new))))
		return (NULL);
	if (errno == 0)
	{
		new->no = 0;
		new->data = NULL;
	}
	else
	{
		va_start(ap, errno);
		new->no = va_arg(ap, int);
		new->data = va_arg(ap, char *);
		if (errno == 3)
			new->aux_data = va_arg(ap, char *);
		va_end(ap);
	}
	return (new);
}
