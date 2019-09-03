int		ft_iterative_factorial(int nb)
{
	int rez;

	if ((nb >= 0) && (nb < 13))
	{
		rez = 1;
		while (nb > 0)
			rez = rez * nb--;
		return (rez);
	}
	else
		return (0);
}
