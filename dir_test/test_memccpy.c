#include "test_lib.h"

// void *memccpy(void *dest, const void *src, int c, size_t n);

int		test_memccpy(void)
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
	memccpy(dest1, "Hello World!", c, n);
	ft_memccpy(dest2, "Hello World!", c, n);
	printf("   memccpy : |%s|\nft_memccpy : |%s|\n\n",
	 		dest1, dest2);

	dest1 = strdup(src);
	dest2 = strdup(src);
	n = 1;
	printf("n : %zu, c = %i |%c|\n", n, c, c);
	memccpy(dest1, "Hello World!", c, n);
	ft_memccpy(dest2, "Hello World!", c, n);
	printf("   memccpy : |%s|\nft_memccpy : |%s|\n\n",
	 		dest1, dest2);

	dest1 = strdup(src);
	dest2 = strdup(src);
	n = 4;
	printf("n : %zu, c = %i |%c|\n", n, c, c);
	memccpy(dest1, "Hello World!", c, n);
	ft_memccpy(dest2, "Hello World!", c, n);
	printf("   memccpy : |%s|\nft_memccpy : |%s|\n\n",
	 		dest1, dest2);

	dest1 = strdup(src);
	dest2 = strdup(src);
	n = 5;
	printf("n : %zu, c = %i |%c|\n", n, c, c);
	memccpy(dest1, "Hello World!", c, n);
	ft_memccpy(dest2, "Hello World!", c, n);
	printf("   memccpy : |%s|\nft_memccpy : |%s|\n\n",
	 		dest1, dest2);

	dest1 = strdup(src);
	dest2 = strdup(src);
	n = 10;
	printf("n : %zu, c = %i |%c|\n", n, c, c);
	memccpy(dest1, "Hello World!", c, n);
	ft_memccpy(dest2, "Hello World!", c, n);
	printf("   memccpy : |%s|\nft_memccpy : |%s|\n\n",
	 		dest1, dest2);

	dest1 = strdup(src);
	dest2 = strdup(src);
	n = 13;
	printf("n : %zu, c = %i |%c|\n", n, c, c);
	memccpy(dest1, "Hello World!", c, n);
	ft_memccpy(dest2, "Hello World!", c, n);
	printf("   memccpy : |%s|\nft_memccpy : |%s|\n\n",
	 		dest1, dest2);

	dest1 = strdup(src);
	dest2 = strdup(src);
	n = 14;
	printf("n : %zu, c = %i |%c|\n", n, c, c);
	memccpy(dest1, "Hello World!", c, n);
	ft_memccpy(dest2, "Hello World!", c, n);
	printf("   memccpy : |%s|\nft_memccpy : |%s|\n\n",
	 		dest1, dest2);

	c = 0;
	dest1 = strdup(src);
	dest2 = strdup(src);
	n = 0;
	printf("n : %zu, c = %i |%c|\n", n, c, c);
	memccpy(dest1, "Hello World!", c, n);
	ft_memccpy(dest2, "Hello World!", c, n);
	printf("   memccpy : |%s|\nft_memccpy : |%s|\n\n",
	 		dest1, dest2);

	c = 0;
	dest1 = strdup(src);
	dest2 = strdup(src);
	n = 3;
	printf("n : %zu, c = %i |%c|\n", n, c, c);
	memccpy(dest1, "Hello World!", c, n);
	ft_memccpy(dest2, "Hello World!", c, n);
	printf("   memccpy : |%s|\nft_memccpy : |%s|\n\n",
	 		dest1, dest2);

	c = 0;
	dest1 = strdup(src);
	dest2 = strdup(src);
	n = 3;
	printf("n : %zu, c = %i |%c|\n", n, c, c);
	memccpy(dest1, "Hello World!", c, n);
	ft_memccpy(dest2, "Hello World!", c, n);
	printf("   memccpy : |%s|\nft_memccpy : |%s|\n\n",
	 		dest1, dest2);

	dest1 = strdup(src);
	dest2 = strdup(src);
	n = 1;
	printf("n : %zu, c = %i |%c|\n", n, c, c);
	memccpy(dest1, "Hello World!", c, n);
	ft_memccpy(dest2, "Hello World!", c, n);
	printf("   memccpy : |%s|\nft_memccpy : |%s|\n\n",
	 		dest1, dest2);

	dest1 = strdup(src);
	dest2 = strdup(src);
	n = 10;
	printf("n : %zu, c = %i |%c|\n", n, c, c);
	memccpy(dest1, "Hello World!", c, n);
	ft_memccpy(dest2, "Hello World!", c, n);
	printf("   memccpy : |%s|\nft_memccpy : |%s|\n\n",
	 		dest1, dest2);

	return (1);
}