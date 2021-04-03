#include "test_lib.h"

int		test_memset(void)
{
	char	*dest1;
	char	*dest2;
	char	*src1;
	char	*src2;
	size_t	n;

	src1 = strdup("Hello World!");
	src2 = strdup("Hello World!");
	n = 3;
	printf("n : %zu, src : |%s|\n", n, src1);
	dest1 = memset(src1, 'A', n);
	dest2 = ft_memset(src2, 'A', n);
	printf("   memset : |%s|\n", dest1);
	printf("ft_memset : |%s|\n", dest2);
	free(src1);
	free(src2);

	src1 = strdup("Hello World!");
	src2 = strdup("Hello World!");
	n = 0;
	printf("\nn : %zu, src : |%s|\n", n, src1);
	dest1 = memset(src1, 'A', n);
	dest2 = ft_memset(src2, 'A', n);
	printf("   memset : |%s|\n", dest1);
	printf("ft_memset : |%s|\n", dest2);
	free(src1);
	free(src2);

	src1 = strdup("Hello World!");
	src2 = strdup("Hello World!");
	n = 11;
	printf("\nn : %zu, src : |%s|\n", n, src1);
	dest1 = memset(src1, 'A', n);
	dest2 = ft_memset(src2, 'A', n);
	printf("   memset : |%s|\n", dest1);
	printf("ft_memset : |%s|\n", dest2);
	free(src1);
	free(src2);

	src1 = strdup("Hello World!");
	src2 = strdup("Hello World!");
	n = 12;
	printf("\nn : %zu, src : |%s|\n", n, src1);
	dest1 = memset(src1, 'A', n);
	dest2 = ft_memset(src2, 'A', n);
	printf("   memset : |%s|\n", dest1);
	printf("ft_memset : |%s|\n", dest2);
	free(src1);
	free(src2);

	src1 = strdup("Hello World!");
	src2 = strdup("Hello World!");
	n = 13;
	printf("\nn : %zu, src : |%s|\n", n, src1);
	dest1 = memset(src1, 'A', n);
	dest2 = ft_memset(src2, 'A', n);
	printf("   memset : |%s|\n", dest1);
	printf("ft_memset : |%s|\n", dest2);
	free(src1);
	free(src2);

	//segmentation fault
	// src1 = strdup("Hello World!");
	// src2 = strdup("Hello World!");
	// n = 30;
	// printf("\nn : %zu, src : |%s|\n", n, src1);
	// dest1 = memset(src1, 'A', n);
	// dest2 = ft_memset(src2, 'A', n);
	// printf("   memset : |%s|\n", dest1);
	// printf("ft_memset : |%s|\n", dest2);
	// free(src1);
	// free(src2);
	return (1);
}