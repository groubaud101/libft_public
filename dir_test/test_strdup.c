#include "test_lib.h"

int		test_strdup(void)
{
	char	*str1;
	char	*str2;

	str1 = strdup("coucou");
	str2 = ft_strdup("coucou");	
	printf("   strdup : |%s|\nft_strdup : |%s|\n", str1, str2);
	test_free(str1, str2, 0, 0);

	str1 = strdup("");
	str2 = ft_strdup("");	
	printf("   strdup : |%s|\nft_strdup : |%s|\n", str1, str2);
	test_free(str1, str2, 0, 0);

	return (1);
}