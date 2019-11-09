   
#include <fillit.h>


size_t		tetr_count(t_tetr *list)
{
	size_t		i;

	i = 0;
	while (list != NULL)
	{
		list = list->next;
		i++;
	}
	return(i);
}

int		solve_map(t_map *map, t_tetr *tetr, int map_size)
{
	
}

void	solver(t_tetr *list)
{
	t_map	*map;
	int		map_size;

	map_size = ft_sqrt(tetr_count(list) * 4);
	while (1)
	{
		map = new_map(map_size);
		if (solve_map(map, map_size))
			break ;
		free_map(map, map_size);
		map_size++;
	}
	print_map(map, map_size);
	free_map(map, map_size);
}