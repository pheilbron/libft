
#include "ft_vector.h"

t_vector	*ft_vect_init(t_vector *v, int capacity)
{
	v->pos = 0;
	v->cap = capacity;
	if (!(v->data = malloc(sizeof(size_t) * capacity)))
		return (NULL);
	return (v);
}
