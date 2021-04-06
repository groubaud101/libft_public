#include "test_lib.h"

void	test_mandatory_part1(int n)
{
	if (n == 1 || n == 0 || n == -1)
	{
		printf("TEST_MEMSET\n");
		if (test_memset() == 1)
			printf("TEST_MEMSET COMPLETE\n\n");
	}
	if (n == 2 || n == 0 || n == -1)
	{
		printf("TEST_BZERO\n");
		if (test_bzero() == 1)
			printf("TEST_BZERO COMPLETE\n\n");
	}
	if (n == 3 || n == 0 || n == -1)
	{
		printf("TEST_MEMCPY\n");
		if (test_memcpy() == 1)
			printf("TEST_MEMCPY COMPLETE\n\n");
	}
	if (n == 4 || n == 0 || n == -1)
	{
		printf("TEST_MEMCCPY\n");
		if (test_memccpy() == 1)
			printf("TEST_MEMCCPY COMPLETE\n\n");
	}
	if (n == 5 || n == 0 || n == -1)
	{
		printf("TEST_MEMMOVE\n");
		if (test_memmove() == 1)
			printf("TEST_MEMMOVE COMPLETE\n\n");
	}
	if (n == 6 || n == 0 || n == -1)
	{
		printf("TEST_MEMCHR\n");
		if (test_memchr() == 1)
			printf("TEST_MEMCHR COMPLETE\n\n");
	}
	if (n == 7 || n == 0 || n == -1)
	{
		printf("TEST_MEMCMP\n");
		if (test_memcmp() == 1)
			printf("TEST_MEMCMP COMPLETE\n\n");
	}
	if (n == 8 || n == 0 || n == -2)
	{
		printf("TEST_STRLEN\n");
		if (test_strlen() == 1)
			printf("TEST_STRLEN COMPLETE\n\n");
	}
	if (n == 9 || n == 0 || n == -2)
	{
		printf("TEST_ISALPHA\n");
		if (test_isalpha() == 1)
			printf("TEST_ISALPHA COMPLETE\n\n");
	}
	if (n == 10 || n == 0 || n == -2)
	{
		printf("TEST_ISDIGIT\n");
		if (test_isdigit() == 1)
			printf("TEST_ISDIGIT COMPLETE\n\n");
	}
	if (n == 11 || n == 0 || n == -2)
	{
		printf("TEST_ISALNUM\n");
		if (test_isalnum() == 1)
			printf("TEST_ISALNUM COMPLETE\n\n");
	}
	if (n == 12 || n == 0 || n == -2)
	{
		printf("TEST_ISASCII\n");
		if (test_isascii() == 1)
			printf("TEST_ISASCII COMPLETE\n\n");
	}
	if (n == 13 || n == 0 || n == -2)
	{
		printf("TEST_ISPRINTn");
		if (test_isprint() == 1)
			printf("TEST_ISPRINT COMPLETE\n\n");
	}
	if (n == 14 || n == 0 || n == -2)
	{
		printf("TEST_TOUPPER\n");
		if (test_toupper() == 1)
			printf("TEST_TOUPPER COMPLETE\n\n");
	}
	if (n == 15 || n == 0 || n == -2)
	{
		printf("TEST_TOLOWER\n");
		if (test_tolower() == 1)
			printf("TEST_TOLOWER COMPLETE\n\n");
	}
	if (n == 16 || n == 0 || n == -3)
	{
		printf("TEST_STRCHR\n");
		if (test_strchr() == 1)
			printf("TEST_STRCHR COMPLETE\n\n");
	}
	if (n == 17 || n == 0 || n == -3)
	{
		printf("TEST_STRRCHR\n");
		if (test_strrchr() == 1)
			printf("TEST_STRRCHR COMPLETE\n\n");
	}
	if (n == 18 || n == 0 || n == -3)
	{
		printf("TEST_STRNCMP\n");
		if (test_strncmp() == 1)
			printf("TEST_STRNCMP COMPLETE\n\n");
	}
	// if (n == 19 || n == 0 || n == -3)
	// {
	// 	printf("TEST_STRLCPY\n");
	// 	if (test_strlcpy() == 1)
	// 		printf("TEST_STRLCPY COMPLETE\n\n");
	// }
	if (n == 20 || n == 0 || n == -3)
	{
		printf("TEST_STRLCAT\n");
		if (test_strlcat() == 1)
			printf("TEST_STRLCAT COMPLETE\n\n");
	}
	if (n == 21 || n == 0 || n == -3)
	{
		printf("TEST_STRNSTR\n");
		if (test_strnstr() == 1)
			printf("TEST_STRNSTR COMPLETE\n\n");
	}
	if (n == 22 || n == 0 || n == -4)
	{
		printf("TEST_ATOI\n");
		if (test_atoi() == 1)
			printf("TEST_ATOI COMPLETE\n\n");
	}
	if (n == 23 || n == 0 || n == -5)
	{
		printf("TEST_CALLOC\n");
		if (test_calloc() == 1)
			printf("TEST_CALLOC COMPLETE\n\n");
	}
	if (n == 24 || n == 0 || n == -5)
	{
		printf("TEST_STRDUP\n");
		if (test_strdup() == 1)
			printf("TEST_STRDUP COMPLETE\n\n");
	}
}

void	test_mandatory_part2(int n)
{
	if (n == 1 || n == 0)
	{
		printf("TEST_SUBSTR\n");
		if (test_substr() == 1)
			printf("TEST_SUBSTR COMPLETE\n\n");
	}
	if (n == 2 || n == 0)
	{
		printf("TEST_STRJOIN\n");
		if (test_strjoin() == 1)
			printf("TEST_STRJOIN COMPLETE\n\n");
	}
	if (n == 3 || n == 0)
	{
		printf("TEST_STRTRIM\n");
		if (test_strtrim() == 1)
			printf("TEST_STRTRIM COMPLETE\n\n");
	}
	if (n == 4 || n == 0)
	{
		printf("TEST_SPLIT\n");
		if (test_split() == 1)
			printf("TEST_SPLIT COMPLETE\n\n");
	}
	if (n == 5 || n == 0)
	{
		printf("TEST_ITOA\n");
		if (test_itoa() == 1)
			printf("TEST_ITOA COMPLETE\n\n");
	}
	if (n == 6 || n == 0)
	{
		printf("TEST_STRMAPI\n");
		if (test_strmapi() == 1)
			printf("TEST_STRMAPI COMPLETE\n\n");
	}
	if (n == 7 || n == 0)
	{
		printf("TEST_PUT_FD\n");
		if (test_put_fd() == 1)
			printf("TEST_PUT_FD COMPLETE\n\n");
	}
}

void	test_bonus_list(int n)
{
	if (n == 1 || n == 0)
	{
		printf("TEST_CHAIN_LST\n");
		if (test_chain_lst() == 1)
			printf("TEST_CHAIN_LST COMPLETE\n\n");
	}
}

int		main(void)
{
	test_mandatory_part1(22);
	// test_mandatory_part2(0);
	// test_bonus_list(0);

}
