#include "test_lib.h"

int		test_calloc(void)
{
	char	*str1 = NULL;
	char	*str2 = NULL;
	size_t	nb1;
	size_t	nb2;


	str1 = (char *)calloc(sizeof(char), 10);
	str2 = (char *)ft_calloc(sizeof(char), 10);
	strcpy(str1, "coucou");
	strcpy(str2, "coucou");
	printf("   calloc : |%s|\nft_calloc : |%s|\n", str1, str2);
	test_free(str1, str2, 0, 0);

	nb1 = 1234567890123456789;
	nb2 = 123;
	printf("nb1 * nb2 = %zu\n", nb1 * nb2);
	printf("ori : |%s|\n", (str1 = calloc(nb1, nb2)));
	free(str1);
	printf("ft_ : |%s|\n", (str2 = ft_calloc(nb1, nb2)));
	free(str2);

	nb1 = 200000000;
	nb2 = 3000000;
	printf("nb1 * nb2 = %zu\n", nb1 * nb2);
	printf("ori : |%s|\n", (str1 = calloc(nb1, nb2)));
	free(str1);
	printf("ft_ : |%s|\n", (str2 = ft_calloc(nb1, nb2)));
	free(str2);

	nb1 = 1234567890123456789;
	nb2 = 10;
	printf("\nnb1 * nb2 = %zu\n", nb1 * nb2);
	printf("ori : |%s|\n", (str1 = calloc(nb1, nb2)));
	free(str1);
	printf("ft_ : |%s|\n", (str2 = ft_calloc(nb1, nb2)));
	free(str2);

	nb1 = SIZE_MAX;
	nb2 = 1;
	printf("\nnb1 * nb2 = %zu\n", nb1 * nb2);
	printf("ori : |%s|\n", (str1 = calloc(nb1, nb2)));
	free(str1);
	printf("ft_ : |%s|\n", (str2 = ft_calloc(nb1, nb2)));
	free(str2);

	nb1 = SIZE_MAX / 10;
	nb2 = 10;
	printf("\nnb1 * nb2 = %zu\n", nb1 * nb2);
	printf("ori : |%s|\n", (str1 = calloc(nb1, nb2)));
	free(str1);
	printf("ft_ : |%s|\n", (str2 = ft_calloc(nb1, nb2)));
	free(str2);

	nb1 = SIZE_MAX / 2;
	nb2 = 2;
	printf("\nnb1 * nb2 = %zu\n", nb1 * nb2);
	printf("ori : |%s|\n", (str1 = calloc(nb1, nb2)));
	free(str1);
	printf("ft_ : |%s|\n", (str2 = ft_calloc(nb1, nb2)));
	free(str2);
	return (1);
}