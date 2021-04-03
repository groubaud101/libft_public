#include "test_lib.h"

int		test_atoi(void)
{
	char	*nbr;

	// nbr = strdup("42");
	// printf("nbr : |%s|\n   atoi : %i\nft_atoi : %i\n",
	// 		nbr, atoi(nbr), ft_atoi(nbr));
	// free(nbr);

	// nbr = strdup("-19");
	// printf("nbr : |%s|\n   atoi : %i\nft_atoi : %i\n",
	// 		nbr, atoi(nbr), ft_atoi(nbr));
	// free(nbr);

	// nbr = strdup("0");
	// printf("nbr : |%s|\n   atoi : %i\nft_atoi : %i\n",
	// 		nbr, atoi(nbr), ft_atoi(nbr));
	// free(nbr);

	// nbr = strdup("   \t   +101");
	// printf("nbr : |%s|\n   atoi : %i\nft_atoi : %i\n",
	// 		nbr, atoi(nbr), ft_atoi(nbr));
	// free(nbr);

	// nbr = strdup("-2");
	// printf("nbr : |%s|\n   atoi : %i\nft_atoi : %i\n",
	// 		nbr, atoi(nbr), ft_atoi(nbr));
	// free(nbr);

	nbr = strdup("---42");
	printf("nbr : |%s|\n   atoi : %i\nft_atoi : %i\n",
			nbr, atoi(nbr), ft_atoi(nbr));
	free(nbr);

	// nbr = strdup("-+42");
	// printf("nbr : |%s|\n   atoi : %i\nft_atoi : %i\n",
	// 		nbr, atoi(nbr), ft_atoi(nbr));
	// free(nbr);

	// nbr = strdup("++42");
	// printf("nbr : |%s|\n   atoi : %i\nft_atoi : %i\n",
	// 		nbr, atoi(nbr), ft_atoi(nbr));
	// free(nbr);

	// nbr = strdup("+-42");
	// printf("nbr : |%s|\n   atoi : %i\nft_atoi : %i\n",
	// 		nbr, atoi(nbr), ft_atoi(nbr));
	// free(nbr);

	// nbr = strdup("+ 42");
	// printf("nbr : |%s|\n   atoi : %i\nft_atoi : %i\n",
	// 		nbr, atoi(nbr), ft_atoi(nbr));
	// free(nbr);

	// nbr = strdup("-24+42");
	// printf("nbr : |%s|\n   atoi : %i\nft_atoi : %i\n",
	// 		nbr, atoi(nbr), ft_atoi(nbr));
	// free(nbr);

	// nbr = strdup("-2147483648");
	// printf("nbr : |%s|\n   atoi : %i\nft_atoi : %i\n",
	// 		nbr, atoi(nbr), ft_atoi(nbr));
	// free(nbr);

	// nbr = strdup("     2147483647");
	// printf("nbr : |%s|\n   atoi : %i\nft_atoi : %i\n",
	// 		nbr, atoi(nbr), ft_atoi(nbr));
	// free(nbr);

	return (1);
}