#include "test_lib.h"

int		test_bzero(void)
{
	char	*src1;
	char	*src2;
	size_t	n;
	size_t	len;

	src1 = NULL;
	src2 = NULL;
	bzero(src1, 1);
	printf("coucou\n");
	ft_bzero(src2, 1);

	src1 = strdup("Hello World!");
	src2 = strdup("Hello World!");
	n = 3;
	len = strlen(src1);
	printf("n : %zu, src : |%s|\n", n, src1);
	bzero(src1, n);
	ft_bzero(src2, n);
	ft_putbyte("   bzero : |", src1, len);
	ft_putbyte("ft_bzero : |", src2, len);
	free(src1);
	free(src2);

	src1 = strdup("Hello World!");
	src2 = strdup("Hello World!");
	n = 0;
	len = strlen(src1);
	printf("\nn : %zu, src : |%s|\n", n, src1);
	bzero(src1, n);
	ft_bzero(src2, n);
	ft_putbyte("   bzero : |", src1, len);
	ft_putbyte("ft_bzero : |", src2, len);
	free(src1);
	free(src2);

	src1 = strdup("Hello World!");
	src2 = strdup("Hello World!");
	n = 11;
	len = strlen(src1);
	printf("\nn : %zu, src : |%s|\n", n, src1);
	bzero(src1, n);
	ft_bzero(src2, n);
	ft_putbyte("   bzero : |", src1, len);
	ft_putbyte("ft_bzero : |", src2, len);
	free(src1);
	free(src2);

	src1 = strdup("Hello World!");
	src2 = strdup("Hello World!");
	n = 12;
	len = strlen(src1);
	printf("\nn : %zu, src : |%s|\n", n, src1);
	bzero(src1, n);
	ft_bzero(src2, n);
	ft_putbyte("   bzero : |", src1, len);
	ft_putbyte("ft_bzero : |", src2, len);
	free(src1);
	free(src2);

	src1 = strdup("Hello World!");
	src2 = strdup("Hello World!");
	n = 13;
	len = strlen(src1);
	printf("\nn : %zu, src : |%s|\n", n, src1);
	bzero(src1, n);
	ft_bzero(src2, n);
	ft_putbyte("   bzero : |", src1, len);
	ft_putbyte("ft_bzero : |", src2, len);
	free(src1);
	free(src2);

	src1 = strdup("");
	src2 = strdup("");
	n = 0;
	len = strlen(src1);
	printf("\nn : %zu, src : |%s|\n", n, src1);
	bzero(src1, n);
	ft_bzero(src2, n);
	ft_putbyte("   bzero : |", src1, len);
	ft_putbyte("ft_bzero : |", src2, len);
	free(src1);
	free(src2);

	src1 = strdup("");
	src2 = strdup("");
	n = 1;
	len = strlen(src1);
	printf("\nn : %zu, src : |%s|\n", n, src1);
	bzero(src1, n);
	ft_bzero(src2, n);
	ft_putbyte("   bzero : |", src1, len);
	ft_putbyte("ft_bzero : |", src2, len);
	free(src1);
	free(src2);

	src1 = strdup("");
	src2 = strdup("");
	n = 2;
	len = strlen(src1);
	printf("\nn : %zu, src : |%s|\n", n, src1);
	bzero(src1, n);
	ft_bzero(src2, n);
	ft_putbyte("   bzero : |", src1, len);
	ft_putbyte("ft_bzero : |", src2, len);
	free(src1);
	free(src2);

	n = 0;
	len = strlen("");
	printf("\nn : %zu, src : ||\n", n);
	bzero(src1, n);
	ft_bzero(src2, n);
	ft_putbyte("   bzero : |", "" , len);
	ft_putbyte("ft_bzero : |", "", len);

	n = 1;
	len = strlen("");
	printf("\nn : %zu, src : ||\n", n);
	bzero(src1, n);
	ft_bzero(src2, n);
	ft_putbyte("   bzero : |", "" , len);
	ft_putbyte("ft_bzero : |", "", len);

	n = 2;
	len = strlen("");
	printf("\nn : %zu, src : ||\n", n);
	bzero(src1, n);
	ft_bzero(src2, n);
	ft_putbyte("   bzero : |", "" , len);
	ft_putbyte("ft_bzero : |", "", len);

	// segmentation fault
	// src1 = strdup("Hello World!");
	// src2 = strdup("Hello World!");
	// n = 30;
	// printf("\nn : %zu, src : |%s|\n", n, src1);
	// bzero(src1, n);
	// ft_bzero(src2, n);
	// ft_putbyte("   bzero : |", src1, len);
	// ft_putbyte("ft_bzero : |", src2, len);
	// free(src1);
	// free(src2);
	return (1);
}