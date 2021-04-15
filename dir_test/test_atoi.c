#include "test_lib.h"

int		test_atoi(void)
{
	char	*nbr;

	nbr = strdup("18446744073709551999");
	printf("nbr : |%s|\n   atoi : %i\nft_atoi : %i\n\n",
			nbr, atoi(nbr), ft_atoi(nbr));
	free(nbr);

	nbr = strdup("42");
	printf("nbr : |%s|\n   atoi : %i\nft_atoi : %i\n",
			nbr, atoi(nbr), ft_atoi(nbr));
	free(nbr);

	nbr = strdup("19223372036854775807");
	printf("nbr : |%s|\n   atoi : %i\nft_atoi : %i\n\n",
			nbr, atoi(nbr), ft_atoi(nbr));
	free(nbr);

	nbr = strdup("-9223372036854775806");
	printf("nbr : |%s|\n   atoi : %i\nft_atoi : %i\n\n",
			nbr, atoi(nbr), ft_atoi(nbr));
	free(nbr);

	nbr = strdup("-9223372036854775807");
	printf("nbr : |%s|\n   atoi : %i\nft_atoi : %i\n\n",
			nbr, atoi(nbr), ft_atoi(nbr));
	free(nbr);

	nbr = strdup("-9223372036854775808");
	printf("nbr : |%s|\n   atoi : %i\nft_atoi : %i\n\n",
			nbr, atoi(nbr), ft_atoi(nbr));
	free(nbr);

	nbr = strdup("-9223372036854775809");
	printf("nbr : |%s|\n   atoi : %i\nft_atoi : %i\n\n",
			nbr, atoi(nbr), ft_atoi(nbr));
	free(nbr);

	nbr = strdup("-9223372036854775810");
	printf("nbr : |%s|\n   atoi : %i\nft_atoi : %i\n\n",
			nbr, atoi(nbr), ft_atoi(nbr));
	free(nbr);

	nbr = strdup("9223372036854775805");
	printf("nbr : |%s|\n   atoi : %i\nft_atoi : %i\n\n",
			nbr, atoi(nbr), ft_atoi(nbr));
	free(nbr);

	nbr = strdup("9223372036854775806");
	printf("nbr : |%s|\n   atoi : %i\nft_atoi : %i\n\n",
			nbr, atoi(nbr), ft_atoi(nbr));
	free(nbr);

	nbr = strdup("9223372036854775807");
	printf("nbr : |%s|\n   atoi : %i\nft_atoi : %i\n\n",
			nbr, atoi(nbr), ft_atoi(nbr));
	free(nbr);

	nbr = strdup("9223372036854775808");
	printf("nbr : |%s|\n   atoi : %i\nft_atoi : %i\n\n",
			nbr, atoi(nbr), ft_atoi(nbr));
	free(nbr);

	nbr = strdup("9223372036854775809");
	printf("nbr : |%s|\n   atoi : %i\nft_atoi : %i\n\n",
			nbr, atoi(nbr), ft_atoi(nbr));
	free(nbr);

	nbr = strdup("9223372036854775810");
	printf("nbr : |%s|\n   atoi : %i\nft_atoi : %i\n\n",
			nbr, atoi(nbr), ft_atoi(nbr));
	free(nbr);

	nbr = strdup("18446744073709551615");
	printf("nbr : |%s|\n   atoi : %i\nft_atoi : %i\n\n",
			nbr, atoi(nbr), ft_atoi(nbr));
	free(nbr);

	nbr = strdup("99999999999999999999999999");
	printf("nbr : |%s|\n   atoi : %i\nft_atoi : %i\n\n",
			nbr, atoi(nbr), ft_atoi(nbr));
	free(nbr);

	nbr = strdup("-99999999999999999999999999");
	printf("nbr : |%s|\n   atoi : %i\nft_atoi : %i\n\n",
			nbr, atoi(nbr), ft_atoi(nbr));
	free(nbr);

	nbr = strdup("-19");
	printf("\nnbr : |%s|\n   atoi : %i\nft_atoi : %i\n",
			nbr, atoi(nbr), ft_atoi(nbr));
	free(nbr);

	nbr = strdup("0");
	printf("\nnbr : |%s|\n   atoi : %i\nft_atoi : %i\n",
			nbr, atoi(nbr), ft_atoi(nbr));
	free(nbr);

	nbr = strdup("   \t   +101");
	printf("\nnbr : |%s|\n   atoi : %i\nft_atoi : %i\n",
			nbr, atoi(nbr), ft_atoi(nbr));
	free(nbr);

	nbr = strdup("-2");
	printf("\nnbr : |%s|\n   atoi : %i\nft_atoi : %i\n",
			nbr, atoi(nbr), ft_atoi(nbr));
	free(nbr);

	nbr = strdup("---42");
	printf("\nnbr : |%s|\n   atoi : %i\nft_atoi : %i\n",
			nbr, atoi(nbr), ft_atoi(nbr));
	free(nbr);

	nbr = strdup("-+42");
	printf("\nnbr : |%s|\n   atoi : %i\nft_atoi : %i\n",
			nbr, atoi(nbr), ft_atoi(nbr));
	free(nbr);

	nbr = strdup("++42");
	printf("\nnbr : |%s|\n   atoi : %i\nft_atoi : %i\n",
			nbr, atoi(nbr), ft_atoi(nbr));
	free(nbr);

	nbr = strdup("+-42");
	printf("\nnbr : |%s|\n   atoi : %i\nft_atoi : %i\n",
			nbr, atoi(nbr), ft_atoi(nbr));
	free(nbr);

	nbr = strdup("+ 42");
	printf("\nnbr : |%s|\n   atoi : %i\nft_atoi : %i\n",
			nbr, atoi(nbr), ft_atoi(nbr));
	free(nbr);

	nbr = strdup("-24+42");
	printf("\nnbr : |%s|\n   atoi : %i\nft_atoi : %i\n",
			nbr, atoi(nbr), ft_atoi(nbr));
	free(nbr);

	nbr = strdup("-2147483648");
	printf("\nnbr : |%s|\n   atoi : %i\nft_atoi : %i\n",
			nbr, atoi(nbr), ft_atoi(nbr));
	free(nbr);

	nbr = strdup("     2147483647");
	printf("\nnbr : |%s|\n   atoi : %i\nft_atoi : %i\n",
			nbr, atoi(nbr), ft_atoi(nbr));
	free(nbr);

	nbr = strdup("2147483648");
	printf("\nnbr : |%s|\n   atoi : %i\nft_atoi : %i\n",
			nbr, atoi(nbr), ft_atoi(nbr));
	free(nbr);

	return (1);
}