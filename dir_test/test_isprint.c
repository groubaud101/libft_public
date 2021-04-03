#include "test_lib.h"

int		test_isprint(void)
{
	int	c;

	c = '1';
	printf("c : %c\n   isprint : %i\nft_isprint : %i\n",
		c, isprint(c), ft_isprint(c));

	c = '&';
	printf("c : %c\n   isprint : %i\nft_isprint : %i\n",
		c, isprint(c), ft_isprint(c));

	c = 'A';
	printf("c : %c\n   isprint : %i\nft_isprint : %i\n",
		c, isprint(c), ft_isprint(c));

	c = 'a';
	printf("c : %c\n   isprint : %i\nft_isprint : %i\n",
		c, isprint(c), ft_isprint(c));

	c = 'Z';
	printf("c : %c\n   isprint : %i\nft_isprint : %i\n",
		c, isprint(c), ft_isprint(c));

	c = 'z';
	printf("c : %c\n   isprint : %i\nft_isprint : %i\n",
		c, isprint(c), ft_isprint(c));

	c = '-';
	printf("c : %c\n   isprint : %i\nft_isprint : %i\n",
		c, isprint(c), ft_isprint(c));

	c = 0;
	printf("c : %c\n   isprint : %i\nft_isprint : %i\n",
		c, isprint(c), ft_isprint(c));

	return (1);
}