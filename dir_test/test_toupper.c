#include "test_lib.h"

int		test_toupper(void)
{
	int	c;

	c = '1';
	printf("c : %c\n   toupper : %c\nft_toupper : %c\n",
		c, toupper(c), ft_toupper(c));

	c = '&';
	printf("c : %c\n   toupper : %c\nft_toupper : %c\n",
		c, toupper(c), ft_toupper(c));

	c = 'A';
	printf("c : %c\n   toupper : %c\nft_toupper : %c\n",
		c, toupper(c), ft_toupper(c));

	c = 'Z';
	printf("c : %c\n   toupper : %c\nft_toupper : %c\n",
		c, toupper(c), ft_toupper(c));

	c = 'B';
	printf("c : %c\n   toupper : %c\nft_toupper : %c\n",
		c, toupper(c), ft_toupper(c));

	c = 'a';
	printf("c : %c\n   toupper : %c\nft_toupper : %c\n",
		c, toupper(c), ft_toupper(c));

	c = '-';
	printf("c : %c\n   toupper : %c\nft_toupper : %c\n",
		c, toupper(c), ft_toupper(c));

	c = 0;
	printf("c : %c\n   toupper : %c\nft_toupper : %c\n",
		c, toupper(c), ft_toupper(c));

	return (1);
}