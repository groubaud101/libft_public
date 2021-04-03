#include "test_lib.h"

//char	*ft_substr(char const *s, unsigned int start, size_t len)

int		test_substr(void)
{
	char			*str;
	char			*src;
	unsigned int	start;
	size_t			len;

	src = strdup("coucou les amis");
	start = 0;
	len = strlen(src);
	str = ft_substr(src, start, len);	
	printf("src : |%s|, src[start %u] : |%c|, len : %zu\nft_substr : |%s|\n\n",
			src, start, src[start], len, str);
	test_free(str, src, 0, 0);

	src = strdup("coucou les amis");
	start = 3;
	len = 3;
	str = ft_substr(src, start, len);	
	printf("source : |%s|, src[start %u] : |%c|, len : %zu\nft_substr : |%s|\n\n",
			src, start, src[start], len, str);
	test_free(str, src, 0, 0);

	src = "coucou les amis";
	start = 5;
	len = strlen(src);
	str = ft_substr(src, start, len);	
	printf("\nsrc : |%s|, src[start %u] : |%c|, len : %zu\nft_substr : |%s|\n",
			src, start, src[start], len, str);
	test_free(str, 0, 0, 0);


	return (1);
}