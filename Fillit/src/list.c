#include "fillit.h"

void		free_list(t_tetr *list)
{
	t_tetr *tmp;

	while (list)
	{
		tmp = list;
		list = list->next;
		free(tmp);
	}
}

t_tetr    *align(t_tetr *tetr)
{
    while (tetr->blockcoords[0] != 0 && tetr->blockcoords[2] != 0 &&
			tetr->blockcoords[4] != 0 && tetr->blockcoords[6] != 0)
	{
        tetr->blockcoords[0] -= 1;
        tetr->blockcoords[2] -= 1;
        tetr->blockcoords[4] -= 1;
        tetr->blockcoords[6] -= 1;
	}
	while (tetr->blockcoords[1] != 0 && tetr->blockcoords[3] != 0 &&
			tetr->blockcoords[5] != 0 && tetr->blockcoords[7] != 0)
	{
        tetr->blockcoords[1] -= 1;
        tetr->blockcoords[3] -= 1;
        tetr->blockcoords[5] -= 1;
        tetr->blockcoords[7] -= 1;
	}
	return (tetr);
}

t_tetr  *tetr_new(char *buf, int tetr_number)
{
    t_tetr  *new;
    int     x;
    int     y;
    int     i;

	i = 0;
	x = 0;
	y = 1;
	if (!(new = (t_tetr *)malloc(sizeof(t_tetr))))
		return (NULL);
	while (i < 20)
	{
		if (buf[i] == '#')
		{
			new->blockcoords[x] = (i >= 5) ? (i % 5) : i;
			new->blockcoords[y] = i / 5;
			x += 2;
			y += 2;
		}
		i++;
	}
	new->x_offset = 0;
	new->y_offset = 0;
    new->next = NULL;
	new->tetr_number = tetr_number;
	return (align(new));

}

t_tetr  *makelist(char *buf, int size)
{
    t_tetr  *new;
    t_tetr  *head;
    int     i;
    int     tetr_number;

    head = NULL;
    i = 0;
    tetr_number = 0;
    while (i < size)
    {
        if (head == NULL)
        {
            head = tetr_new(buf + i, tetr_number);
            new = head;
        }
        else
        {
            new->next = tetr_new(buf + i, tetr_number);
            new = new->next;
        }
        tetr_number++;
        i += 21;
    }
    return(head);
}