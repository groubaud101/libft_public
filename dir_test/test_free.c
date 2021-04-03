#include "test_lib.h"

void	test_free(char *src1, char *src2, char *dest1, char *dest2)
{
	if (src1)
		free(src1);
	if (src2)
		free(src2);
	if (dest1)
		free(dest1);
	if (dest2)
		free(dest2);
}