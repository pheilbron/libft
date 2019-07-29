
#include "ft_vector.h"

void	ft_vect_set(t_vector *v, int index, void *item)
{
	v->data[index] = item;
}
