void	ft_putchar (char c);

int		main (int ac, char **av)
{
	int i;
	int j;

	i = 0;
	while (++i < ac)
	{
		j = 0;
		while (av[i][j])
			ft_putchar(av[i][j++]);
		ft_putchar('\n');
	}
}