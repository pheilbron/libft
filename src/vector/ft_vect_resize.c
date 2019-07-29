
#include "ft_vector.h"

t_vector	*ft_vect_resize(t_vector *v, int capacity)
{
	void	**data;
	int		i;

	if (capacity == 0)
		capacity = 1;
	if ((data = malloc(sizeof(size_t) * capacity)))
	{
		i = -1;
		while (++i < v->pos)
			data[i] = v->data[i];
		free(v->data);
		v->data = data;
		v->cap = capacity;
		return (v);
	}
	return (NULL);
}
