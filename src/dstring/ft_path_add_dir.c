
#include "ft_dstring.h"
#include "ft_string.h"

size_t	ft_path_add_dir(t_path *path, char *new_data, size_t len)
{
	if (path->path->cap < path->path->pos + len + 2)
		if (!ft_dstr_resize(path->path, path->path->cap * 2 +
					(path->path->cap >= len + 1 ? 0 : len + 1)))
			len = path->path->cap - (path->path->pos + 1);
	path->path->buf[path->path->pos++] = '/';
	ft_memcpy(path->path->buf + path->path->pos, new_data, len);
	path->path->buf[path->path->pos + len] = '\0';
	path->path->pos += len;
	return (len);
}
