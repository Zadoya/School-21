int		ft_recursive_factorial(int nb)
{
	if ((nb > 0) && (nb < 13))
		return (nb * ft_recursive_factorial(nb - 1));
	else if (nb == 0)
        return (1);
    else
		return (0);
}
