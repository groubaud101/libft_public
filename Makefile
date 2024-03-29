# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: groubaud <groubaud@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/01 17:22:08 by groubaud          #+#    #+#              #
#    Updated: 2021/04/01 17:22:08 by groubaud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

DIR_S	=	./
DIR_B	=	./
DIR_H	=	./
DIR_LIB	=	./

SRC_S	=	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
			ft_memchr.c ft_memcmp.c \
			ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
			ft_isprint.c ft_toupper.c ft_tolower.c \
			ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c \
			ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
			ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
			ft_strmapi.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
BONUS_S	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstadd_back.c \
			ft_lstlast.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
			ft_lstmap.c

SRCS	=	$(addprefix $(DIR_S), $(SRC_S))
INCLUDE	=	$(addprefix $(DIR_H), $(INC))
BONUS	=	$(addprefix $(DIR_B), $(BONUS_S))

INC		=	libft.h

CC		=	gcc
FLAGS	=	-Wall -Wextra -Werror

OBJS	=	$(SRCS:.c=.o)
OBJS_B	=	$(BONUS:.c=.o)

LIB		=	ar rcs

## partie de test

DIR_T	=	./dir_test/
SRC_T	=	test_*.c
SRCT	=	$(addprefix $(DIR_T), $(SRC_T))

## commande

.c.o	:	$(SRCS)
			$(CC) $(CFLAGS) -c -o $@ $<

$(NAME)	:	$(OBJS)
			$(LIB) $@ $^

bonus	:	$(OBJS_B)
			$(LIB) $(NAME) $^

all		:	$(NAME)

clean	:
			rm -rf $(OBJS) $(OBJS_B)

fclean	:	clean
			rm -rf $(NAME)

re		:	fclean all

so		:
			@${CC} -fPIC -c ${FLAGS} ${SRCS} ${BONUS} -I ${DIR_H}
			@${CC} -shared -o libft.so ${OBJS} ${OBJS_B}
			@printf " _____________________________________\n"
			@printf "|___ Libft.so successfully created ___|\n\n"

test	:	bonus
			$(CC) $(FLAGS) $(SRCT) -I $(DIR_H) -L $(DIR_LIB) -lft
			@echo "TEST :\n"
			@./a.out

.PHONY	:	all clean fclean re bonus test
