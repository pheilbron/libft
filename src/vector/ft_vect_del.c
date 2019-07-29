
#include "ft_vector.h"
#include "ft_string.h"

void	ft_vect_del(t_vector *v, int index)
{
	ft_memmove(v->data + index,
			v->data + index + 1,
			(v->pos - index - 1) * sizeof(size_t));
	v->pos--;
	if (v->pos <= v->cap / 4)
		ft_vect_resize(v, v->cap / 4);
}
