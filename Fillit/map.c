#include "fillit.h"

t_map	*new_map(int map_size)
{
	t_map	*map;
	int		i;
	
	map = (t_map *)malloc(sizeof(t_map));
	map->array = (char **)ft_memalloc(sizeof(char *) * map_size);
	while (i < map_size)
	{
		map->array[i] = (char *)malloc(map_size);
		ft_memset(map->array[i], '.', map_size);
		i++;
	}
	return (map);
}

void	print_map(t_map *map, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		ft_putstr(map->array[i]);
		ft_putchar('\n');
		i++;
	}
}


void	free_map(t_map *map, int map_size)
{
	int i;

	i = 0;
	while (i < map_size)
	{
		ft_memdel((void **)&(map->array[i]));
		i++;
	}
	ft_memdel((void **)&(map->array));
	ft_memdel((void **)&map);
}