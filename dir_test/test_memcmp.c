#include "test_lib.h"

// int memcmp(const void *s1, const void *s2, size_t n);

int		test_memcmp(void)
{
	char	*src1;
	char	*src2;
	char	*dest1;
	char	*dest2;
	size_t	n;

	n = 0;
	dest1 = strdup("Hello, can you hear me ?");
	dest2 = strdup("Hello, can you hear me ?");
	src1 = strdup("Hello World!");
	src2 = strdup("Hello World!");
	printf("src  : |%s|\ndest : |%s|, n : %zu\n", src1, dest1, n);
	printf("   memcmp : %i\n", memcmp(src1, dest1, n));
	printf("ft_memcmp : %i\n", ft_memcmp(src2, dest2, n));

	n = 1;
	dest1 = strdup("Hello, can you hear me ?");
	dest2 = strdup("Hello, can you hear me ?");
	src1 = strdup("Hello World!");
	src2 = strdup("Hello World!");
	printf("src  : |%s|\ndest : |%s|, n : %zu\n", src1, dest1, n);
	printf("   memcmp : %i\n", memcmp(src1, dest1, n));
	printf("ft_memcmp : %i\n", ft_memcmp(src2, dest2, n));

	n = 1;
	dest1 = strdup("Hello World!");
	dest2 = strdup("Hello World!");
	src1 = strdup("Hallo World!");
	src2 = strdup("Hallo World!");
	printf("src  : |%s|\ndest : |%s|, n : %zu\n", src1, dest1, n);
	printf("   memcmp : %i\n", memcmp(src1, dest1, n));
	printf("ft_memcmp : %i\n", ft_memcmp(src2, dest2, n));

	n = 4;
	dest1 = strdup("Hello, can you hear me ?");
	dest2 = strdup("Hello, can you hear me ?");
	src1 = strdup("Hello World!");
	src2 = strdup("Hello World!");
	printf("src  : |%s|\ndest : |%s|, n : %zu\n", src1, dest1, n);
	printf("   memcmp : %i\n", memcmp(src1, dest1, n));
	printf("ft_memcmp : %i\n", ft_memcmp(src2, dest2, n));

	n = 5;
	dest1 = strdup("Hello, can you hear me ?");
	dest2 = strdup("Hello, can you hear me ?");
	src1 = strdup("Hello World!");
	src2 = strdup("Hello World!");
	printf("src  : |%s|\ndest : |%s|, n : %zu\n", src1, dest1, n);
	printf("   memcmp : %i\n", memcmp(src1, dest1, n));
	printf("ft_memcmp : %i\n", ft_memcmp(src2, dest2, n));

	n = 6;
	dest1 = strdup("Hello, can you hear me ?");
	dest2 = strdup("Hello, can you hear me ?");
	src1 = strdup("Hello World!");
	src2 = strdup("Hello World!");
	printf("src  : |%s|\ndest : |%s|, n : %zu\n", src1, dest1, n);
	printf("   memcmp : %i\n", memcmp(src1, dest1, n));
	printf("ft_memcmp : %i\n", ft_memcmp(src2, dest2, n));

	n = 1;
	dest1 = strdup("Salut");
	dest2 = strdup("Salut");
	src1 = strdup("Hello World!");
	src2 = strdup("Hello World!");
	printf("src  : |%s|\ndest : |%s|, n : %zu\n", src1, dest1, n);
	printf("   memcmp : %i\n", memcmp(src1, dest1, n));
	printf("ft_memcmp : %i\n", ft_memcmp(src2, dest2, n));

	n = 2;
	dest1 = strdup("Salut");
	dest2 = strdup("Salut");
	src1 = strdup("Hello World!");
	src2 = strdup("Hello World!");
	printf("src  : |%s|\ndest : |%s|, n : %zu\n", src1, dest1, n);
	printf("   memcmp : %i\n", memcmp(src1, dest1, n));
	printf("ft_memcmp : %i\n", ft_memcmp(src2, dest2, n));

	n = 1;
	dest1 = strdup("Hi");
	dest2 = strdup("Hi");
	src1 = strdup("Hello World!");
	src2 = strdup("Hello World!");
	printf("src  : |%s|\ndest : |%s|, n : %zu\n", src1, dest1, n);
	printf("   memcmp : %i\n", memcmp(src1, dest1, n));
	printf("ft_memcmp : %i\n", ft_memcmp(src2, dest2, n));

	n = 2;
	dest1 = strdup("Hi");
	dest2 = strdup("Hi");
	src1 = strdup("Hello World!");
	src2 = strdup("Hello World!");
	printf("src  : |%s|\ndest : |%s|, n : %zu\n", src1, dest1, n);
	printf("   memcmp : %i\n", memcmp(src1, dest1, n));
	printf("ft_memcmp : %i\n", ft_memcmp(src2, dest2, n));

	// dans l'autre sens
	printf("\nDans l'autre sens\n\n");

	n = 0;
	src1 = strdup("Hello, can you hear me ?");
	src2 = strdup("Hello, can you hear me ?");
	dest1 = strdup("Hello World!");
	dest2 = strdup("Hello World!");
	printf("src  : |%s|\ndest : |%s|, n : %zu\n", src1, dest1, n);
	printf("   memcmp : %i\n", memcmp(src1, dest1, n));
	printf("ft_memcmp : %i\n", ft_memcmp(src2, dest2, n));

	n = 1;
	src1 = strdup("Hello, can you hear me ?");
	src2 = strdup("Hello, can you hear me ?");
	dest1 = strdup("Hello World!");
	dest2 = strdup("Hello World!");
	printf("src  : |%s|\ndest : |%s|, n : %zu\n", src1, dest1, n);
	printf("   memcmp : %i\n", memcmp(src1, dest1, n));
	printf("ft_memcmp : %i\n", ft_memcmp(src2, dest2, n));

	n = 4;
	src1 = strdup("Hello, can you hear me ?");
	src2 = strdup("Hello, can you hear me ?");
	dest1 = strdup("Hello World!");
	dest2 = strdup("Hello World!");
	printf("src  : |%s|\ndest : |%s|, n : %zu\n", src1, dest1, n);
	printf("   memcmp : %i\n", memcmp(src1, dest1, n));
	printf("ft_memcmp : %i\n", ft_memcmp(src2, dest2, n));

	n = 5;
	src1 = strdup("Hello, can you hear me ?");
	src2 = strdup("Hello, can you hear me ?");
	dest1 = strdup("Hello World!");
	dest2 = strdup("Hello World!");
	printf("src  : |%s|\ndest : |%s|, n : %zu\n", src1, dest1, n);
	printf("   memcmp : %i\n", memcmp(src1, dest1, n));
	printf("ft_memcmp : %i\n", ft_memcmp(src2, dest2, n));

	n = 6;
	src1 = strdup("Hello, can you hear me ?");
	src2 = strdup("Hello, can you hear me ?");
	dest1 = strdup("Hello World!");
	dest2 = strdup("Hello World!");
	printf("src  : |%s|\ndest : |%s|, n : %zu\n", src1, dest1, n);
	printf("   memcmp : %i\n", memcmp(src1, dest1, n));
	printf("ft_memcmp : %i\n", ft_memcmp(src2, dest2, n));

	n = 1;
	src1 = strdup("Salut");
	src2 = strdup("Salut");
	dest1 = strdup("Hello World!");
	dest2 = strdup("Hello World!");
	printf("src  : |%s|\ndest : |%s|, n : %zu\n", src1, dest1, n);
	printf("   memcmp : %i\n", memcmp(src1, dest1, n));
	printf("ft_memcmp : %i\n", ft_memcmp(src2, dest2, n));

	n = 2;
	src1 = strdup("Salut");
	src2 = strdup("Salut");
	dest1 = strdup("Hello World!");
	dest2 = strdup("Hello World!");
	printf("src  : |%s|\ndest : |%s|, n : %zu\n", src1, dest1, n);
	printf("   memcmp : %i\n", memcmp(src1, dest1, n));
	printf("ft_memcmp : %i\n", ft_memcmp(src2, dest2, n));

	n = 1;
	src1 = strdup("Hi");
	src2 = strdup("Hi");
	dest1 = strdup("Hello World!");
	dest2 = strdup("Hello World!");
	printf("src  : |%s|\ndest : |%s|, n : %zu\n", src1, dest1, n);
	printf("   memcmp : %i\n", memcmp(src1, dest1, n));
	printf("ft_memcmp : %i\n", ft_memcmp(src2, dest2, n));

	n = 2;
	src1 = strdup("Hi");
	src2 = strdup("Hi");
	dest1 = strdup("Hello World!");
	dest2 = strdup("Hello World!");
	printf("src  : |%s|\ndest : |%s|, n : %zu\n", src1, dest1, n);
	printf("   memcmp : %i\n", memcmp(src1, dest1, n));
	printf("ft_memcmp : %i\n", ft_memcmp(src2, dest2, n));

	printf("\nsrc vide\n");

	n = 0;
	src1 = strdup("");
	src2 = strdup("");
	dest1 = strdup("Hello World!");
	dest2 = strdup("Hello World!");
	printf("src  : |%s|\ndest : |%s|, n : %zu\n", src1, dest1, n);
	printf("   memcmp : %i\n", memcmp(src1, dest1, n));
	printf("ft_memcmp : %i\n", ft_memcmp(src2, dest2, n));

	n = 1;
	src1 = strdup("");
	src2 = strdup("");
	dest1 = strdup("Hello World!");
	dest2 = strdup("Hello World!");
	printf("src  : |%s|\ndest : |%s|, n : %zu\n", src1, dest1, n);
	printf("   memcmp : %i\n", memcmp(src1, dest1, n));
	printf("ft_memcmp : %i\n", ft_memcmp(src2, dest2, n));

	n = 2;
	src1 = strdup("");
	src2 = strdup("");
	dest1 = strdup("Hello World!");
	dest2 = strdup("Hello World!");
	printf("src  : |%s|\ndest : |%s|, n : %zu\n", src1, dest1, n);
	printf("   memcmp : %i\n", memcmp(src1, dest1, n));
	printf("ft_memcmp : %i\n", ft_memcmp(src2, dest2, n));

	printf("\ndest vide\n");

	n = 0;
	src1 = strdup("Hello");
	src2 = strdup("Hello");
	dest1 = strdup("");
	dest2 = strdup("");
	printf("src  : |%s|\ndest : |%s|, n : %zu\n", src1, dest1, n);
	printf("   memcmp : %i\n", memcmp(src1, dest1, n));
	printf("ft_memcmp : %i\n", ft_memcmp(src2, dest2, n));

	n = 1;
	src1 = strdup("Hello");
	src2 = strdup("Hello");
	dest1 = strdup("");
	dest2 = strdup("");
	printf("src  : |%s|\ndest : |%s|, n : %zu\n", src1, dest1, n);
	printf("   memcmp : %i\n", memcmp(src1, dest1, n));
	printf("ft_memcmp : %i\n", ft_memcmp(src2, dest2, n));

	n = 2;
	src1 = strdup("Hello");
	src2 = strdup("Hello");
	dest1 = strdup("");
	dest2 = strdup("");
	printf("src  : |%s|\ndest : |%s|, n : %zu\n", src1, dest1, n);
	printf("   memcmp : %i\n", memcmp(src1, dest1, n));
	printf("ft_memcmp : %i\n", ft_memcmp(src2, dest2, n));

	printf("\nLes deux sont vides\n");

	n = 0;
	src1 = strdup("");
	src2 = strdup("");
	dest1 = strdup("");
	dest2 = strdup("");
	printf("src  : |%s|\ndest : |%s|, n : %zu\n", src1, dest1, n);
	printf("   memcmp : %i\n", memcmp(src1, dest1, n));
	printf("ft_memcmp : %i\n", ft_memcmp(src2, dest2, n));

	n = 1;
	src1 = strdup("");
	src2 = strdup("");
	dest1 = strdup("");
	dest2 = strdup("");
	printf("src  : |%s|\ndest : |%s|, n : %zu\n", src1, dest1, n);
	printf("   memcmp : %i\n", memcmp(src1, dest1, n));
	printf("ft_memcmp : %i\n", ft_memcmp(src2, dest2, n));

	n = 2;
	src1 = strdup("");
	src2 = strdup("");
	dest1 = strdup("");
	dest2 = strdup("");
	printf("src  : |%s|\ndest : |%s|, n : %zu\n", src1, dest1, n);
	printf("   memcmp : %i\n", memcmp(src1, dest1, n));
	printf("ft_memcmp : %i\n", ft_memcmp(src2, dest2, n));

	return (1);
}