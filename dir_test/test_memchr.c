#include "test_lib.h"

// void *memchr(const void *s, int c, size_t n);

int		test_memchr(void)
{
	char	*src1;
	char	*src2;
	char	*dest1;
	char	*dest2;
	int		c;
	size_t	n;
	size_t	len;

	c = 'o';
	dest1 = strdup("Salut ca va ?");
	dest2 = strdup("Salut ca va ?");
	src1 = strdup("Hello World!");
	src2 = strdup("Hello World!");
	n = 0;
	len = strlen(src1);
	printf("n : %zu, src : |%s|, c = |%c|\n", n, src1, c);
	dest1 = memchr(src1, c, n);
	dest2 = ft_memchr(src2, c, n);
	ft_putbyte("   memchr : |", dest1, len);
	ft_putbyte("ft_memchr : |", dest2, len);

	c = 'o';
	dest1 = strdup("Salut ca va ?");
	dest2 = strdup("Salut ca va ?");
	src1 = strdup("Hello World!");
	src2 = strdup("Hello World!");
	n = 3;
	len = strlen(src1);
	printf("n : %zu, src : |%s|, c = |%c|\n", n, src1, c);
	dest1 = memchr(src1, c, n);
	dest2 = ft_memchr(src2, c, n);
	ft_putbyte("   memchr : |", dest1, len);
	ft_putbyte("ft_memchr : |", dest2, len);

	c = 'o';
	dest1 = strdup("Salut ca va ?");
	dest2 = strdup("Salut ca va ?");
	src1 = strdup("Hello World!");
	src2 = strdup("Hello World!");
	n = 4;
	len = strlen(src1);
	printf("n : %zu, src : |%s|, c = |%c|\n", n, src1, c);
	dest1 = memchr(src1, c, n);
	dest2 = ft_memchr(src2, c, n);
	ft_putbyte("   memchr : |", dest1, len);
	ft_putbyte("ft_memchr : |", dest2, len);

	c = 'o';
	dest1 = strdup("Salut ca va ?");
	dest2 = strdup("Salut ca va ?");
	src1 = strdup("Hello World!");
	src2 = strdup("Hello World!");
	n = 5;
	len = strlen(src1);
	printf("n : %zu, src : |%s|, c = |%c|\n", n, src1, c);
	dest1 = memchr(src1, c, n);
	dest2 = ft_memchr(src2, c, n);
	ft_putbyte("   memchr : |", dest1, len);
	ft_putbyte("ft_memchr : |", dest2, len);

	c = 'o';
	dest1 = strdup("Salut ca va ?");
	dest2 = strdup("Salut ca va ?");
	src1 = strdup("Hello World!");
	src2 = strdup("Hello World!");
	n = 50;
	len = strlen(src1);
	printf("n : %zu, src : |%s|, c = |%c|\n", n, src1, c);
	dest1 = memchr(src1, c, n);
	dest2 = ft_memchr(src2, c, n);
	ft_putbyte("   memchr : |", dest1, len);
	ft_putbyte("ft_memchr : |", dest2, len);

	printf("\nSource vide\n");

	c = 'o';
	dest1 = strdup("Salut ca va ?");
	dest2 = strdup("Salut ca va ?");
	src1 = strdup("");
	src2 = strdup("");
	n = 0;
	len = strlen(src1);
	printf("n : %zu, src : |%s|, c = |%c|\n", n, src1, c);
	dest1 = memchr(src1, c, n);
	dest2 = ft_memchr(src2, c, n);
	ft_putbyte("   memchr : |", dest1, len);
	ft_putbyte("ft_memchr : |", dest2, len);

	c = 'o';
	dest1 = strdup("Salut ca va ?");
	dest2 = strdup("Salut ca va ?");
	src1 = strdup("");
	src2 = strdup("");
	n = 1;
	len = strlen(src1);
	printf("n : %zu, src : |%s|, c = |%c|\n", n, src1, c);
	dest1 = memchr(src1, c, n);
	dest2 = ft_memchr(src2, c, n);
	ft_putbyte("   memchr : |", dest1, len);
	ft_putbyte("ft_memchr : |", dest2, len);

	c = 'o';
	dest1 = strdup("Salut ca va ?");
	dest2 = strdup("Salut ca va ?");
	src1 = strdup("");
	src2 = strdup("");
	n = 2;
	len = strlen(src1);
	printf("n : %zu, src : |%s|, c = |%c|\n", n, src1, c);
	dest1 = memchr(src1, c, n);
	dest2 = ft_memchr(src2, c, n);
	ft_putbyte("   memchr : |", dest1, len);
	ft_putbyte("ft_memchr : |", dest2, len);

	printf("\nCaractere null\n");

	c = 0;
	dest1 = strdup("Salut ca va ?");
	dest2 = strdup("Salut ca va ?");
	src1 = strdup("Hello world!");
	src2 = strdup("Hello world!");
	n = 0;
	len = strlen(src1) + 2;
	printf("n : %zu, src : |%s|, c = |%c|\n", n, src1, c);
	dest1 = memchr(src1, c, n);
	dest2 = ft_memchr(src2, c, n);
	ft_putbyte("   memchr : |", dest1, len);
	ft_putbyte("ft_memchr : |", dest2, len);

	c = 0;
	dest1 = strdup("Salut ca va ?");
	dest2 = strdup("Salut ca va ?");
	src1 = strdup("Hello world!");
	src2 = strdup("Hello world!");
	n = 1;
	len = strlen(src1) + 2;
	printf("n : %zu, src : |%s|, c = |%c|\n", n, src1, c);
	dest1 = memchr(src1, c, n);
	dest2 = ft_memchr(src2, c, n);
	ft_putbyte("   memchr : |", dest1, len);
	ft_putbyte("ft_memchr : |", dest2, len);

	c = 0;
	dest1 = strdup("Salut ca va ?");
	dest2 = strdup("Salut ca va ?");
	src1 = strdup("Hello world!");
	src2 = strdup("Hello world!");
	n = 2;
	len = strlen(src1) + 2;
	printf("n : %zu, src : |%s|, c = |%c|\n", n, src1, c);
	dest1 = memchr(src1, c, n);
	dest2 = ft_memchr(src2, c, n);
	ft_putbyte("   memchr : |", dest1, len);
	ft_putbyte("ft_memchr : |", dest2, len);

	c = 0;
	dest1 = strdup("Salut ca va ?");
	dest2 = strdup("Salut ca va ?");
	src1 = strdup("Hello world!");
	src2 = strdup("Hello world!");
	n = 12;
	len = strlen(src1) + 2;
	printf("n : %zu, src : |%s|, c = |%c|\n", n, src1, c);
	dest1 = memchr(src1, c, n);
	dest2 = ft_memchr(src2, c, n);
	ft_putbyte("   memchr : |", dest1, len);
	ft_putbyte("ft_memchr : |", dest2, len);

	c = 0;
	dest1 = strdup("Salut ca va ?");
	dest2 = strdup("Salut ca va ?");
	src1 = strdup("Hello world!");
	src2 = strdup("Hello world!");
	n = 13;
	len = strlen(src1) + 2;
	printf("n : %zu, src : |%s|, c = |%c|\n", n, src1, c);
	dest1 = memchr(src1, c, n);
	dest2 = ft_memchr(src2, c, n);
	ft_putbyte("   memchr : |", dest1, len);
	ft_putbyte("ft_memchr : |", dest2, len);

	c = 0;
	dest1 = strdup("Salut ca va ?");
	dest2 = strdup("Salut ca va ?");
	src1 = strdup("Hello world!");
	src2 = strdup("Hello world!");
	n = 14;
	len = strlen(src1) + 2;
	printf("n : %zu, src : |%s|, c = |%c|\n", n, src1, c);
	dest1 = memchr(src1, c, n);
	dest2 = ft_memchr(src2, c, n);
	ft_putbyte("   memchr : |", dest1, len);
	ft_putbyte("ft_memchr : |", dest2, len);

	c = 0;
	dest1 = strdup("Salut ca va ?");
	dest2 = strdup("Salut ca va ?");
	src1 = strdup("Hello world!");
	src2 = strdup("Hello world!");
	n = 15;
	len = strlen(src1) + 2;
	printf("n : %zu, src : |%s|, c = |%c|\n", n, src1, c);
	dest1 = memchr(src1, c, n);
	dest2 = ft_memchr(src2, c, n);
	ft_putbyte("   memchr : |", dest1, len);
	ft_putbyte("ft_memchr : |", dest2, len);

	return (1);
}