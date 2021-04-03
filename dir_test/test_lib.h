#ifndef TEST_LIB_H
# define TEST_LIB_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# include "libft.h"

void	ft_putbyte(char *pref, void *s, size_t n);
void	test_free(char *src1, char *src2, char *dest1, char *dest2);
void	test_puttab(char **tab);
void	test_putlst(t_list *lst);

int		test_memset(void);
int		test_bzero(void);
int		test_memcpy(void);
int		test_memccpy(void);
int		test_memmove(void);
int		test_memchr(void);
int		test_memcmp(void);

int		test_strlen(void);
int		test_isalpha(void);
int		test_isdigit(void);
int		test_isalnum(void);
int		test_isascii(void);
int		test_isprint(void);
int		test_toupper(void);
int		test_tolower(void);

int		test_strchr(void);
int		test_strrchr(void);
int		test_strncmp(void);
int		test_strnstr(void);

int		test_strlcat(void);
int		test_atoi(void);

int		test_calloc(void);
int		test_strdup(void);

int		test_substr(void);
int		test_strjoin(void);
int		test_strtrim(void);
int		test_split(void);
int		test_itoa(void);
int		test_strmapi(void);

int		test_put_fd(void);

int		test_chain_lst(void);

int		test_read(void);

#endif