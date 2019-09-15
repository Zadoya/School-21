#include "libft.h"

static int w_counter(const char *s, char c)
{
    int i = 0;
    int counter = 0;

    while (s[i])
    {
        if (s[i - 1] == c && s[i] != c )
            counter++;
        i++;
    }
    return(counter);
}

static char **fill_tab(const char *str, char c, char **tab)
{
    int i = 0;
    int counter = 0, w_counter = 0;
    char *word;
    while (str[i])
    {
        while(str[i] == c)
            i++;
        while(str[i + counter] != c && str[i + counter])
            counter++;
        if (!(word = malloc(counter + 1)))
            return (NULL);
        counter = 0;
        while(str[i] != c && str[i])
            word[counter++] = str[i++];
        word[counter] = '\0';
        tab[w_counter++] = word;
        counter = 0;
    }
    return (tab);
}

char	**ft_strsplit(const char *s, char c)
{
	int i;
    int word;
    char **tab;
    i = 0;
    word = w_counter(s, c);
    if (!(tab = (char **)malloc(sizeof(char *) * word + 1)))
        return(NULL);
    tab = fill_tab(s, c, tab);
    tab[word] = NULL;
    return (tab);
}