#include "test_lib.h"

int		test_tolower(void)
{
	int	c;

	c = '1';
	printf("c : %c\n   tolower : %c\nft_tolower : %c\n",
		c, tolower(c), ft_tolower(c));

	c = '&';
	printf("c : %c\n   tolower : %c\nft_tolower : %c\n",
		c, tolower(c), ft_tolower(c));

	c = 'A';
	printf("c : %c\n   tolower : %c\nft_tolower : %c\n",
		c, tolower(c), ft_tolower(c));

	c = 'Z';
	printf("c : %c\n   tolower : %c\nft_tolower : %c\n",
		c, tolower(c), ft_tolower(c));

	c = 'B';
	printf("c : %c\n   tolower : %c\nft_tolower : %c\n",
		c, tolower(c), ft_tolower(c));

	c = 'a';
	printf("c : %c\n   tolower : %c\nft_tolower : %c\n",
		c, tolower(c), ft_tolower(c));

	c = '-';
	printf("c : %c\n   tolower : %c\nft_tolower : %c\n",
		c, tolower(c), ft_tolower(c));

	c = 0;
	printf("c : %c\n   tolower : %c\nft_tolower : %c\n",
		c, tolower(c), ft_tolower(c));

	return (1);
}