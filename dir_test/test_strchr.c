#include "test_lib.h"

// char *strchr(const char *s, int c);

int		test_strchr(void)
{
	char	*s1;
	char	*result1;
	int		c;
	char	*s2;
	char	*result2;

	c = 'l';
	s1 = strdup("Hello World!");
	s2 = strdup("Hello World!");
	result1 = strchr(s1, c);
	result2 = ft_strchr(s2, c);
	printf("c(%i) : |%c|\ns1 : |%s|\ns2 : |%s|\n   strchr : |%s|\nft_strchr : |%s|\n",
			c, c, s1, s2, result1, result2);
	test_free(s1, s2, 0, 0);

	c = 'a';
	s1 = strdup("Hello World!");
	s2 = strdup("Hello World!");
	result1 = strchr(s1, c);
	result2 = ft_strchr(s2, c);
	printf("\nc(%i) : |%c|\ns1 : |%s|\ns2 : |%s|\n   strchr : |%s|\nft_strchr : |%s|\n",
			c, c, s1, s2, result1, result2);
	test_free(s1, s2, 0, 0);

	c = 0;
	s1 = strdup("Hello World!");
	s2 = strdup("Hello World!");
	result1 = strchr(s1, c);
	result2 = ft_strchr(s2, c);
	printf("\nc(%i) : |%c|\ns1 : |%s|\ns2 : |%s|\n   strchr : |%s|\nft_strchr : |%s|\n",
			c, c, s1, s2, result1, result2);
	test_free(s1, s2, 0, 0);

	c = 0;
	s1 = strdup("Hello\0World!");
	s2 = strdup("Hello\0World!");
	result1 = strchr(s1, c);
	result2 = ft_strchr(s2, c);
	printf("\nRIP MON TEST\n");
	ft_putbyte("   strchr : |", result1 + 1, 10);
	ft_putbyte("ft_strchr : |", result2 + 1, 10);
	test_free(s1, s2, 0, 0);

	c = 0;
	s1 = strdup("");
	s2 = strdup("");
	result1 = strchr(s1, c);
	result2 = ft_strchr(s2, c);
	printf("\nc(%i) : |%c|\ns1 : |%s|\ns2 : |%s|\n   strchr : |%s|\nft_strchr : |%s|\n",
			c, c, s1, s2, result1, result2);
	test_free(s1, s2, 0, 0);

	c = 3;
	s1 = strdup("");
	s2 = strdup("");
	result1 = strchr(s1, c);
	result2 = ft_strchr(s2, c);
	printf("\nc(%i) : |%c|\ns1 : |%s|\ns2 : |%s|\n   strchr : |%s|\nft_strchr : |%s|\n",
			c, c, s1, s2, result1, result2);
	test_free(s1, s2, 0, 0);

	c = 'r' + 256;
	s1 = strdup("Hello World!");
	s2 = strdup("Hello World!");
	result1 = strchr(s1, c);
	result2 = ft_strchr(s2, c);
	printf("\nc(%i) : |%c|\ns1 : |%s|\ns2 : |%s|\n   strchr : |%s|\nft_strchr : |%s|\n",
			c, c, s1, s2, result1, result2);
	test_free(s1, s2, 0, 0);

	return (1);
}