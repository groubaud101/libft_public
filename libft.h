#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

# define ATOI_ERROR 0
# ifndef BUFF
#  define BUFF 11
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}t_list;

typedef struct s_read
{
	char			*str;
	int				rd;
	struct s_read	*next;
}t_read;

/*
** Mandatory part one
** Memory management
*/

void	*ft_memset(void *s, int c, size_t n);
void	*ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

/*
** ft_strlen
*/

size_t	ft_strlen(const char *s);

/*
** is_something
*/

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);

/*
** Up or low the case
*/

int		ft_toupper(int c);
int		ft_tolower(int c);

/*
** Looking for char in str
*/

char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/*
** String management
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strnstr(const char *haystack, const char *needle, size_t n);

/*
** I AM THE NUMBER
*/

int		ft_atoi(const char *nptr);

/*
** Memory allocation
*/

void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s);

/*
** Mandatory part two
** String management and memory allocation
*/

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int nb, char c));

/*
** Write on file descriptor
*/

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

/*
** Chain list
*/

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **alst, t_list *new_lst);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **alst, t_list *new_lst);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif