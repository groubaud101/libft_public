#include "test_lib.h"

void	test_puttab(char **tab)
{
	int		index;

	index = 0;
	printf("Let's see the array :\n");
	if (!tab || !tab[index])
	{
		printf("tab[0] : |(null)|\n\n");
		return ;
	}
	while (tab[index])
	{
		printf("tab[%i] : |%s|\n", index, tab[index]);
		index++;
	}
	printf("\n");
}