#include "test_lib.h"

static void	free_tab(char **tab)
{
	int	i;

	i = 0;
	printf("coucou 0\n");
	if (!tab)
		return ;
	printf("coucou 1\n");
	while (tab[i])
	{
		printf("free tab[%i] : |%s|\n sizeof : %li, ptr : %p\n",
				i, tab[i], sizeof(tab[i]), tab[i]);
		if (tab[i])
			free(tab[i]);
		printf("coucou 3\n\n");
		i++;
	}
	printf("coucou 4\n");
	printf("free tab[%i] : |%s|\n", i, tab[i]);
	free(tab);
}

int		test_split(void)
{
	// char	*str;
	// char	sep;
	// char	**tab;

	char	**tab2;
	
	tab2 = ft_split("  tripouille  42  ", ' ');
	test_puttab(tab2);
	if (tab2)
		free_tab(tab2);

	// str = ft_calloc(sizeof(*str), 1);
	// sep = 0;
	// printf("str : |%s|, sep : |%c|\n", str, sep);
	// tab = ft_split(str, sep);
	// if (tab[0] == NULL)
	// 	printf("tab[0] == NULL\n\n");
	// else
	// 	printf("tab[0] != NULL\n\n");
	// free_tab(tab);
	// free(str);

	// str = strdup("coucou.ca.va");
	// sep = '.';
	// printf("str : |%s|, sep : |%c|\n", str, sep);
	// tab = ft_split(str, sep);
	// test_puttab(tab);
	// free_tab(tab);
	// free(str);

	// str = strdup(".c.");
	// sep = '.';
	// printf("str : |%s|, sep : |%c|\n", str, sep);
	// tab = ft_split(str, sep);
	// test_puttab(tab);
	// // free_tab(tab)
	// free(str);

	// str = strdup("coucou");
	// sep = '.';
	// printf("str : |%s|, sep : |%c|\n", str, sep);
	// tab = ft_split(str, sep);
	// test_puttab(tab);
	// // free_tab(tab)
	// free(str);

	// str = strdup("....coucou....ca..va....");
	// sep = '.';
	// printf("str : |%s|, sep : |%c|\n", str, sep);
	// tab = ft_split(str, sep);
	// test_puttab(tab);
	// // free_tab(tab)
	// free(str);

	// str = strdup("..");
	// sep = '.';
	// printf("str : |%s|, sep : |%c|\n", str, sep);
	// tab = ft_split(str, sep);
	// test_puttab(tab);
	// // free_tab(tab)
	// free(str);

	// str = strdup("");
	// sep = '.';
	// printf("str : |%s|, sep : |%c|\n", str, sep);
	// tab = ft_split(str, sep);
	// test_puttab(tab);
	// // free_tab(tab)
	// free(str);

	// str = strdup(".");
	// sep = '.';
	// printf("str : |%s|, sep : |%c|\n", str, sep);
	// tab = ft_split(str, sep);
	// test_puttab(tab);
	// // free_tab(tab)
	// free(str);

	return (1);
}