#include "fillit.h"

int		overlap(t_map *map, t_tetr *tetr)
{
	int i;

	i = 0;
	while (i <= 6)
	{
		if(map->array[tetr->blockcoords[i + 1] + tetr->y_offset][tetr->blockcoords[i] + tetr->x_offset] != '.')
			break ;
		i += 2;
	}
	return (i != 8);
}

void	place(t_tetr *tetr, t_map *map, char symbol)
{
	int i;

	i = 0;
	while (i <= 6)
	{
		map->array[tetr->blockcoords[i + 1] + tetr->y_offset][tetr->blockcoords[i] + tetr->x_offset] = symbol;
		i += 2;
	}
}

int		in_bounds(t_tetr *tetr, int map_size, char axis)
{
	if (axis == 'x')
		return (tetr->blockcoords[0] + tetr->x_offset < map_size &&
				tetr->blockcoords[2] + tetr->x_offset < map_size &&
				tetr->blockcoords[4] + tetr->x_offset < map_size &&
				tetr->blockcoords[6] + tetr->x_offset < map_size);
	else
		return (tetr->blockcoords[1] + tetr->y_offset < map_size &&
				tetr->blockcoords[3] + tetr->y_offset < map_size &&
				tetr->blockcoords[5] + tetr->y_offset < map_size &&
				tetr->blockcoords[7] + tetr->y_offset < map_size);
}

int		solve_map(t_map *map, t_tetr *tetr, int map_size)
{
	if (!tetr)
		return (1);
	tetr->x_offset = 0;
	tetr->y_offset = 0;
	while (in_bounds(tetr, map_size, 'y'))
	{
		while (in_bounds(tetr, map_size, 'x'))
		{
			//ft_putstr(ft_itoa(map_size));
			if (!overlap(map, tetr))
			{
				place(tetr, map, tetr->tetr_number + 'A');
				if (solve_map(map, tetr->next, map_size))
					return (1);
				else
					place(tetr, map, '.');
			}
			tetr->x_offset++;
		}
		tetr->x_offset = 0;
		tetr->y_offset++;
	}
	return (0);
}

void	solver(t_tetr *list)
{
	t_map	*map;
	int		map_size;

	map_size = ft_sqrt(tetr_count(list) * 4);
	while (1)
	{
		map = new_map(map_size);
		if (solve_map(map, list, map_size))
			break ;
		free_map(map, map_size);
		map_size++;
	}
	print_map(map, map_size);
	free_map(map, map_size);
}