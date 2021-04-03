#include "test_lib.h"

// char *ft_strtrim(char const *s1, char const *set);

int		test_strtrim(void)
{
	char	*s1;
	char	*set;
	char	*result;

	s1 = strdup("-+-COU+C_O-U_+-_+-");
	set = strdup("_+-");
	printf("s1 : |%s|, set : |%s|\n", s1, set);
	result = ft_strtrim(s1, set);
	printf("ft_strtim : |%s|\n", result);

	return (1);
}