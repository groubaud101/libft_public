#include "test_lib.h"

int		test_isalnum(void)
{
	int	c;

	c = '1';
	printf("c : %c\n   isalnum : %i\nft_isalnum : %i\n",
		c, isalnum(c), ft_isalnum(c));

	c = '&';
	printf("c : %c\n   isalnum : %i\nft_isalnum : %i\n",
		c, isalnum(c), ft_isalnum(c));

	c = 'A';
	printf("c : %c\n   isalnum : %i\nft_isalnum : %i\n",
		c, isalnum(c), ft_isalnum(c));

	c = 'a';
	printf("c : %c\n   isalnum : %i\nft_isalnum : %i\n",
		c, isalnum(c), ft_isalnum(c));

	c = 'Z';
	printf("c : %c\n   isalnum : %i\nft_isalnum : %i\n",
		c, isalnum(c), ft_isalnum(c));

	c = 'z';
	printf("c : %c\n   isalnum : %i\nft_isalnum : %i\n",
		c, isalnum(c), ft_isalnum(c));

	c = '-';
	printf("c : %c\n   isalnum : %i\nft_isalnum : %i\n",
		c, isalnum(c), ft_isalnum(c));

	c = 0;
	printf("c : %c\n   isalnum : %i\nft_isalnum : %i\n",
		c, isalnum(c), ft_isalnum(c));

	return (1);
}