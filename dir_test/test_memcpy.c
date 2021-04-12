#include "test_lib.h"

int		test_memcpy(void)
{
	char	*src1;
	char	*src2;
	char	*dest1;
	char	*dest2;
	size_t	n;
	size_t	len;

	dest1 = (char *)malloc(30);
	dest2 = (char *)malloc(30);
	src1 = strdup("Hello World!");
	src2 = strdup("Hello World!");
	n = 0;
	len = strlen(src1);
	printf("n : %zu, src : |%s|\n", n, src1);
	dest1 = memcpy(dest1, src1, n);
	dest2 = ft_memcpy(dest2, src2, n);
	ft_putbyte("   memcpy : |", dest1, len);
	ft_putbyte("ft_memcpy : |", dest2, len);
	free(src1);
	free(src2);

/*
	src1 = strdup("Hello World!");
	src2 = strdup("Hello World!");
	n = 1;
	len = strlen(src1);
	printf("n : %zu, src : |%s|\n", n, src1);
	dest1 = memcpy(dest1, src1, n);
	dest2 = ft_memcpy(dest2, src2, n);
	ft_putbyte("   memcpy : |", dest1, len);
	ft_putbyte("ft_memcpy : |", dest2, len);
	free(src1);
	free(src2);

	src1 = strdup("Hello World!");
	src2 = strdup("Hello World!");
	n = 10;
	len = strlen(src1);
	printf("n : %zu, src : |%s|\n", n, src1);
	dest1 = memcpy(dest1, src1, n);
	dest2 = ft_memcpy(dest2, src2, n);
	ft_putbyte("   memcpy : |", dest1, len);
	ft_putbyte("ft_memcpy : |", dest2, len);
	free(src1);
	free(src2);

	src1 = strdup("Hello World!");
	src2 = strdup("Hello World!");
	n = 13;
	len = strlen(src1);
	printf("n : %zu, src : |%s|\n", n, src1);
	dest1 = memcpy(dest1, src1, n);
	dest2 = ft_memcpy(dest2, src2, n);
	ft_putbyte("   memcpy : |", dest1, len);
	ft_putbyte("ft_memcpy : |", dest2, len);
	free(src1);
	free(src2);

	src1 = strdup("");
	src2 = strdup("");
	n = 0;
	len = strlen(src1);
	printf("n : %zu, src : |%s|\n", n, src1);
	dest1 = memcpy(dest1, src1, n);
	dest2 = ft_memcpy(dest2, src2, n);
	ft_putbyte("   memcpy : |", dest1, len);
	ft_putbyte("ft_memcpy : |", dest2, len);
	free(src1);
	free(src2);

	src1 = strdup("");
	src2 = strdup("");
	n = 1;
	len = strlen(src1);
	printf("n : %zu, src : |%s|\n", n, src1);
	dest1 = memcpy(dest1, src1, n);
	dest2 = ft_memcpy(dest2, src2, n);
	ft_putbyte("   memcpy : |", dest1, len);
	ft_putbyte("ft_memcpy : |", dest2, len);
	free(src1);
	free(src2);

	src1 = strdup("");
	src2 = strdup("");
	n = 10;
	len = strlen(src1);
	printf("n : %zu, src : |%s|\n", n, src1);
	dest1 = memcpy(dest1, src1, n);
	dest2 = ft_memcpy(dest2, src2, n);
	ft_putbyte("   memcpy : |", dest1, len);
	ft_putbyte("ft_memcpy : |", dest2, len);
	free(src1);
	free(src2);

	n = 0;
	len = strlen("");
	printf("\nn : %zu, src : ||\n", n);
	dest1 = memcpy(dest1, src1, n);
	dest2 = ft_memcpy(dest2, src2, n);
	ft_putbyte("   memcpy : |", dest1, len);
	ft_putbyte("ft_memcpy : |", dest2, len);

	n = 1;
	len = strlen("");
	printf("\nn : %zu, src : ||\n", n);
	dest1 = memcpy(dest1, src1, n);
	dest2 = ft_memcpy(dest2, src2, n);
	ft_putbyte("   memcpy : |", dest1, len);
	ft_putbyte("ft_memcpy : |", dest2, len);

	n = 10;
	len = strlen("");
	printf("\nn : %zu, src : ||\n", n);
	dest1 = memcpy(dest1, src1, n);
	dest2 = ft_memcpy(dest2, src2, n);
	ft_putbyte("   memcpy : |", dest1, len);
	ft_putbyte("ft_memcpy : |", dest2, len);
*/
	return (1);
}
