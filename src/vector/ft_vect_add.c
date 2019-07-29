
#include "ft_vector.h"

void	*ft_vect_add(t_vector *v, void *data)
{
	if (v->cap == v->pos && !ft_vect_resize(v, v->cap * 2))
		return (NULL);
	v->data[v->pos] = data;
	v->pos++;
	return (v->data[v->pos - 1]);
}
