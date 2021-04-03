#include "test_lib.h"

// void *memmove(void *dest, const void *src, size_t n);

int		test_memmove(void)
{
	char	*dest1;
	char	*dest2;
	char	*src;
	int		c;
	size_t	n;

	c = 'o';

	src = (char *)malloc(16);
    memset(src, '-', 15);

	dest1 = strdup(src);
	dest2 = strdup(src);
	n = 0;
	printf("n : %zu, c = %i |%c|\n", n, c, c);
	memmove(dest1, "Hello World!", n);
	ft_memmove(dest2, "Hello World!", n);
	printf("   memmove : |%s|\nft_memmove : |%s|\n\n",
	 		dest1, dest2);

	dest1 = strdup(src);
	dest2 = strdup(src);
	n = 1;
	printf("n : %zu, c = %i |%c|\n", n, c, c);
	memmove(dest1, "Hello World!", n);
	ft_memmove(dest2, "Hello World!", n);
	printf("   memmove : |%s|\nft_memmove : |%s|\n\n",
	 		dest1, dest2);

	dest1 = strdup(src);
	dest2 = strdup(src);
	n = 4;
	printf("n : %zu, c = %i |%c|\n", n, c, c);
	memmove(dest1, "Hello World!", n);
	ft_memmove(dest2, "Hello World!", n);
	printf("   memmove : |%s|\nft_memmove : |%s|\n\n",
	 		dest1, dest2);

	dest1 = strdup(src);
	dest2 = strdup(src);
	n = 5;
	printf("n : %zu, c = %i |%c|\n", n, c, c);
	memmove(dest1, "Hello World!", n);
	ft_memmove(dest2, "Hello World!", n);
	printf("   memmove : |%s|\nft_memmove : |%s|\n\n",
	 		dest1, dest2);

	dest1 = strdup(src);
	dest2 = strdup(src);
	n = 10;
	printf("n : %zu, c = %i |%c|\n", n, c, c);
	memmove(dest1, "Hello World!", n);
	ft_memmove(dest2, "Hello World!", n);
	printf("   memmove : |%s|\nft_memmove : |%s|\n\n",
	 		dest1, dest2);

	dest1 = strdup(src);
	dest2 = strdup(src);
	n = 13;
	printf("n : %zu, c = %i |%c|\n", n, c, c);
	memmove(dest1, "Hello World!", n);
	ft_memmove(dest2, "Hello World!", n);
	printf("   memmove : |%s|\nft_memmove : |%s|\n\n",
	 		dest1, dest2);

	dest1 = strdup(src);
	dest2 = strdup(src);
	n = 14;
	printf("n : %zu, c = %i |%c|\n", n, c, c);
	memmove(dest1, "Hello World!", n);
	ft_memmove(dest2, "Hello World!", n);
	printf("   memmove : |%s|\nft_memmove : |%s|\n\n",
	 		dest1, dest2);

	c = 0;
	dest1 = strdup(src);
	dest2 = strdup(src);
	n = 0;
	printf("n : %zu, c = %i |%c|\n", n, c, c);
	memmove(dest1, "Hello World!", n);
	ft_memmove(dest2, "Hello World!", n);
	printf("   memmove : |%s|\nft_memmove : |%s|\n\n",
	 		dest1, dest2);

	c = 0;
	dest1 = strdup(src);
	dest2 = strdup(src);
	n = 3;
	printf("n : %zu, c = %i |%c|\n", n, c, c);
	memmove(dest1, "Hello World!", n);
	ft_memmove(dest2, "Hello World!", n);
	printf("   memmove : |%s|\nft_memmove : |%s|\n\n",
	 		dest1, dest2);

	c = 0;
	dest1 = strdup(src);
	dest2 = strdup(src);
	n = 3;
	printf("n : %zu, c = %i |%c|\n", n, c, c);
	memmove(dest1, "Hello World!", n);
	ft_memmove(dest2, "Hello World!", n);
	printf("   memmove : |%s|\nft_memmove : |%s|\n\n",
	 		dest1, dest2);

	dest1 = strdup(src);
	dest2 = strdup(src);
	n = 1;
	printf("n : %zu, c = %i |%c|\n", n, c, c);
	memmove(dest1, "Hello World!", n);
	ft_memmove(dest2, "Hello World!", n);
	printf("   memmove : |%s|\nft_memmove : |%s|\n\n",
	 		dest1, dest2);

	dest1 = strdup(src);
	dest2 = strdup(src);
	n = 10;
	printf("n : %zu, c = %i |%c|\n", n, c, c);
	memmove(dest1, "Hello World!", n);
	ft_memmove(dest2, "Hello World!", n);
	printf("   memmove : |%s|\nft_memmove : |%s|\n\n",
	 		dest1, dest2);

	return (1);
}