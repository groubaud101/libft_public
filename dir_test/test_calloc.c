#include "test_lib.h"

int		test_calloc(void)
{
	char	*str1;
	char	*str2;

	str1 = (char *)calloc(sizeof(char), 10);
	str2 = (char *)ft_calloc(sizeof(char), 10);
	strcpy(str1, "coucou");
	strcpy(str2, "coucou");
	printf("   calloc : |%s|\nft_calloc : |%s|\n", str1, str2);
	test_free(str1, str2, 0, 0);

	return (1);
}