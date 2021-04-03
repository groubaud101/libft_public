#include "test_lib.h"

//size_t	ft_strlen(const char *s)

int		test_strlen(void)
{
	char	*s;

	s = strdup("COUCOU");
	printf("s : |%s|\n   strlen : %zu\nft_strlen : %zu\n",
			s, strlen(s), ft_strlen(s));

	s = strdup("");
	printf("s : |%s|\n   strlen : %zu\nft_strlen : %zu\n",
			s, strlen(s), ft_strlen(s));

	s = strdup("9");
	printf("s : |%s|\n   strlen : %zu\nft_strlen : %zu\n",
			s, strlen(s), ft_strlen(s));

	return (1);
}