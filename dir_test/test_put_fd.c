#include "test_lib.h"

int		test_put_fd(void)
{
	int	nb;
	int	fd;

	fd = open("./dir_test/test_file.txt", O_RDWR);
	nb = 0;
	ft_putstr_fd("nbr : 0\nfct : ", fd);
	ft_putnbr_fd(nb, fd);
	ft_putchar_fd('\n', fd);

	nb = 42;
	ft_putendl_fd("", fd);
	ft_putstr_fd("nbr : 42\nfct : ", fd);
	ft_putnbr_fd(nb, fd);
	ft_putchar_fd('\n', fd);

	nb = -19;
	ft_putendl_fd("", fd);
	ft_putstr_fd("nbr : -19\nfct : ", fd);
	ft_putnbr_fd(nb, fd);
	ft_putchar_fd('\n', fd);

	nb = +101;
	ft_putendl_fd("", fd);
	ft_putstr_fd("nbr : +101\nfct : ", fd);
	ft_putnbr_fd(nb, fd);
	ft_putchar_fd('\n', fd);

	nb = -2147483648;
	ft_putendl_fd("", fd);
	ft_putstr_fd("nbr : -2147483648\nfct : ", fd);
	ft_putnbr_fd(nb, fd);
	ft_putchar_fd('\n', fd);

	nb = 2147483647;
	ft_putendl_fd("", fd);
	ft_putstr_fd("nbr : 2147483647\nfct : ", fd);
	ft_putnbr_fd(nb, fd);
	ft_putchar_fd('\n', fd);

	return (1);
}