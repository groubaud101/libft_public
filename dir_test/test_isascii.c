#include "test_lib.h"

int		test_isascii(void)
{
	int	c;

	c = '1';
	printf("c : %c\n   isascii : %i\nft_isascii : %i\n",
		c, isascii(c), ft_isascii(c));

	c = '&';
	printf("c : %c\n   isascii : %i\nft_isascii : %i\n",
		c, isascii(c), ft_isascii(c));

	c = 'A';
	printf("c : %c\n   isascii : %i\nft_isascii : %i\n",
		c, isascii(c), ft_isascii(c));

	c = 'a';
	printf("c : %c\n   isascii : %i\nft_isascii : %i\n",
		c, isascii(c), ft_isascii(c));

	c = -1;
	printf("c : %c\n   isascii : %i\nft_isascii : %i\n",
		c, isascii(c), ft_isascii(c));

	c = 127;
	printf("c : %c\n   isascii : %i\nft_isascii : %i\n",
		c, isascii(c), ft_isascii(c));

	c = 128;
	printf("c : %c\n   isascii : %i\nft_isascii : %i\n",
		c, isascii(c), ft_isascii(c));

	c = 0;
	printf("c : %c\n   isascii : %i\nft_isascii : %i\n",
		c, isascii(c), ft_isascii(c));

	return (1);
}