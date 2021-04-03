#include "test_lib.h"

// char	*ft_strjoin(char const *s1, char const *s2);

int		test_strjoin(void)
{
	char	*str1;
	char	*str2;
	char	*result;

	result = ft_strjoin("tripouille", "42");
	printf("\nstr1 : |%s|\nstr2 : |%s|\nft_strjoin : |%s|\n",
			"tripouille", "42", result);
	test_free(0, 0, result, 0);	

	str1 = strdup("coucou");
	str2 = strdup(" ca va les amis ?");
	result = ft_strjoin(str1, str2);
	printf("\nstr1 : |%s|\nstr2 : |%s|\nft_strjoin : |%s|\n",
			str1, str2, result);
	test_free(str1, str2, result, 0);	

	str1 = strdup("");
	str2 = strdup("");
	result = ft_strjoin(str1, str2);
	printf("\nstr1 : |%s|\nstr2 : |%s|\nft_strjoin : |%s|\n",
			str1, str2, result);
	test_free(str1, str2, result, 0);	

	str1 = strdup("");
	str2 = strdup(" ca va les amis ?");
	result = ft_strjoin(str1, str2);
	printf("\nstr1 : |%s|\nstr2 : |%s|\nft_strjoin : |%s|\n",
			str1, str2, result);
	test_free(str1, str2, result, 0);	

	str1 = strdup("coucou");
	str2 = strdup("");
	result = ft_strjoin(str1, str2);
	printf("\nstr1 : |%s|\nstr2 : |%s|\nft_strjoin : |%s|\n",
			str1, str2, result);
	test_free(str1, str2, result, 0);	

	return (1);
}