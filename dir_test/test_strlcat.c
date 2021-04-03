#include "test_lib.h"

// size_t	ft_strlcat(char *dst, const char *src, size_t size)

int		test_strlcat(void)
{
	char	*str;
	char	*dest;
	int		r;

	dest = malloc(30);
	dest = strcpy(dest, "coucou");
	str = strdup(" ca va les amis ?");
	printf("\nstr1 : |%s|\nstr2 : |%s|\n", dest, str);
	r = ft_strlcat(dest, str, ft_strlen(str) + ft_strlen(dest) + 1);
	printf("\ndest : |%s|\nr : |%i|\n", dest, r);
	test_free(dest, str, 0, 0);	

	return (1);
}