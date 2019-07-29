
#include "ft_vector.h"

t_vector	*ft_vect_new(int capacity)
{
	t_vector *v;

	if ((v = malloc(sizeof(*v))))
	{
		v->pos = 0;
		v->cap = capacity;
		if (!(v->data = malloc(sizeof(size_t) * capacity)))
			return (NULL);
	}
	return (v);
}
