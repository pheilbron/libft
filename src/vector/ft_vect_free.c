
#include "ft_vector.h"

void	ft_vect_free(t_vector *v)
{
	free(v->data);
	free(v);
}
