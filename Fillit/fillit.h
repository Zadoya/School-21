typedef struct		s_tetr
{
	int				fig_num;
	char			fig[4][5];
	struct s_tetr	*next;
	struct s_tetr	*prev;
	
}					t_tetr;
