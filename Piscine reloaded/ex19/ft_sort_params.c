void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] - s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	sort(int ac, char **av)
{
	int i;
	int j;
	char *tmp;

	i = 0;
	while (++i < ac)
	{
		j = i - 1;
		while (++j < ac)
			if (ft_strcmp(av[i], av[j]) > 0)
			{
				tmp = av[i];
				av[i] = av[j];
				av[j] = tmp;
			}
	}
	
}

void ft_print_params(int ac, char **av)
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

int		main(int ac, char **av)
{
    sort (ac, av);
	ft_print_params(ac, av);
    return(0);
}