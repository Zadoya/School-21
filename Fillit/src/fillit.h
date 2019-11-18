#ifndef FILLIT_H
#define FILLIT_H

# include "../libft/libft.h"
# include <fcntl.h>

# define BLOCK '#'
# define EMPTY '.'
  
typedef struct	s_tetr
{
	int				blockcoords[8];
	int				tetr_number;
	int				x_offset;
	int				y_offset;
	struct s_tetr	*next;
}				t_tetr;

typedef struct	s_map
{
	char		**array;
}				t_map;

//validator
int 	block_counter(char *buf);
int		touch_counter(char *buf);
int		valid(char *buf, int size);
t_tetr	*validator(char *file);

//ft_sqrt
int 	ft_sqrt(int nb);
size_t	tetr_count(t_tetr *list);

//algorithm
int		overlap(t_map *map, t_tetr *tetr);
void	place(t_tetr *tetr, t_map *map, char symbol);
int		in_bouds(t_tetr *tetr, int map_size, char axis);
int		solve_map(t_map *map, t_tetr *tetr, int map_size);
void	solver(t_tetr *list);

//list
void	free_list(t_tetr *list);
t_tetr	*align(t_tetr *tetr);
t_tetr  *tetr_new(char *buf, int tetr_number);
t_tetr  *makelist(char *buf, int size);

//map
t_map	*new_map(int map_size);
void	print_map(t_map *map, int size);
void	free_map(t_map *map, int map_size);

#endif