#include "test_lib.h"

int		test_isdigit(void)
{
	int	c;

	c = '1';
	printf("c : %c\n   isdigit : %i\nft_isdigit : %i\n",
		c, isdigit(c), ft_isdigit(c));

	c = '&';
	printf("c : %c\n   isdigit : %i\nft_isdigit : %i\n",
		c, isdigit(c), ft_isdigit(c));

	c = 'A';
	printf("c : %c\n   isdigit : %i\nft_isdigit : %i\n",
		c, isdigit(c), ft_isdigit(c));

	c = 'a';
	printf("c : %c\n   isdigit : %i\nft_isdigit : %i\n",
		c, isdigit(c), ft_isdigit(c));

	c = '-';
	printf("c : %c\n   isdigit : %i\nft_isdigit : %i\n",
		c, isdigit(c), ft_isdigit(c));

	c = 0;
	printf("c : %c\n   isdigit : %i\nft_isdigit : %i\n",
		c, isdigit(c), ft_isdigit(c));

	return (1);
}