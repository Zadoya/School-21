int		ft_sqrt(int nb)
{
	int down;
	int middle;
	int up;

	down = 0;
	up = 46341;
	middle = up / 2;
	while (up - down > 1) 
	{
		middle = down + (up - down) / 2;
		if (middle * middle == nb)
			return (middle);
		else if (middle * middle > nb)
			up = middle;
		else if (middle * middle < nb)
			down = middle;
	}
	return (0);
}
