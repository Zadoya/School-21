#include "fillit.h"

int		main(int ac, char **av)
{
	t_tetr	*tetr_list;

	if (ac != 2)
	{
		ft_putstr("usage: ./fillit source_file\n");
		return(1);
	}
	if (!(tetr_list = validator(av[1])))
	{
		ft_putstr("error\n");
		return (1);
	}
	solver(tetr_list);
	return(0);
}