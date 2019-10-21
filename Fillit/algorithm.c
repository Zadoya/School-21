#include <fillit.h>
#include <unistd.h>

int		counter_fig(t_tetr **list)
{
	t_tetr	*tmp;
	int		i;

	tmp = *list;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return(i);
}

void	algorithm_x(t_tetr **list)
{
	int		min_square, max_square, figures;

	figures = counter_fig(list);
	max_square = (figures * 4)
}