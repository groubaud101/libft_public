#include "test_lib.h"

int		test_isalpha(void)
{
	int	c;

	c = '1';
	printf("c : %c\n   isalpha : %i\nft_isalpha : %i\n",
		c, isalpha(c), ft_isalpha(c));

	c = '&';
	printf("c : %c\n   isalpha : %i\nft_isalpha : %i\n",
		c, isalpha(c), ft_isalpha(c));

	c = 'A';
	printf("c : %c\n   isalpha : %i\nft_isalpha : %i\n",
		c, isalpha(c), ft_isalpha(c));

	c = 'a';
	printf("c : %c\n   isalpha : %i\nft_isalpha : %i\n",
		c, isalpha(c), ft_isalpha(c));

	c = 'Z';
	printf("c : %c\n   isalpha : %i\nft_isalpha : %i\n",
		c, isalpha(c), ft_isalpha(c));

	c = 'z';
	printf("c : %c\n   isalpha : %i\nft_isalpha : %i\n",
		c, isalpha(c), ft_isalpha(c));

	c = '-';
	printf("c : %c\n   isalpha : %i\nft_isalpha : %i\n",
		c, isalpha(c), ft_isalpha(c));

	c = 0;
	printf("c : %c\n   isalpha : %i\nft_isalpha : %i\n",
		c, isalpha(c), ft_isalpha(c));

	return (1);
}