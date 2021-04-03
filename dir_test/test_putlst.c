#include "test_lib.h"

void	test_putlst(t_list *lst)
{
	int		i;

	i = 0;
	if (!lst)
		printf("premier element à NULL\n");
	while (lst)
	{
		printf("elem %i : |%s|\n", i, (char *)lst->content);
		i++;
		lst = lst->next;
	}
}