#include "test_lib.h"

int		test_itoa(void)
{
	int	nb;

	nb = 0;
	printf("  nb : %i\nnbr : |%s|\n", nb, ft_itoa(nb));

	nb = 42;
	printf("\n  nb : %i\nnbr : |%s|\n", nb, ft_itoa(nb));

	nb = -19;
	printf("\n  nb : %i\nnbr : |%s|\n", nb, ft_itoa(nb));

	nb = +101;
	printf("\n  nb : %i\nnbr : |%s|\n", nb, ft_itoa(nb));

	nb = -2147483648;
	printf("\n  nb : %i\nnbr : |%s|\n", nb, ft_itoa(nb));

	nb = 2147483647;
	printf("\n  nb : %i\nnbr : |%s|\n", nb, ft_itoa(nb));

	return (1);
}