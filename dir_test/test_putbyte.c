#include "test_lib.h"

void	ft_putbyte(char *pref, void *s, size_t n)
{
	write(1, pref, strlen(pref));
	if (s == NULL)
		write(1, "(null)", 6);
	else
		write(1, s, n);
	write(1, "|\n", 2);
}
