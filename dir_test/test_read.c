#include "test_lib.h"

int		test_read(void)
{
	int		fd;
	char	*str;

	fd = open("./dir_test/test_file.txt", O_RDWR);
	str = ft_read_file(fd);
	printf("test_file.txt :\n%s\n", str);
	return (1);
}