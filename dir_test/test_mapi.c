#include "test_lib.h"

// char	*ft_strmapi(char const *s, char (*f)(unsigned int nb, char c));

static char	ptr_f1(unsigned int i, char c)
{
	i++;
	i--;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

static char	ptr_f2(unsigned int i, char c)
{
	i++;
	i--;
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int			test_strmapi(void)
{
	char	*str;
	char	*result1;
	char	*result2;

	str = ft_strdup("CouCOU ca VA ?");
	result1 = ft_strmapi(str, &ptr_f1);
	result2 = ft_strmapi(str, &ptr_f2);
	printf("str : |%s|\nupp : |%s|\nlow : |%s|\n",
			str, result1, result2);
	test_free(str, result1, result2, 0);

	return (1);
}