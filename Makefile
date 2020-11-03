# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: fbes <fbes@student.codam.nl>                 +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/26 14:25:38 by fbes          #+#    #+#                  #
#    Updated: 2020/11/03 17:23:59 by fbes          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME =		libft.a

SRCS =		ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

BO_SRCS =	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c

OBJS =		$(SRCS:.c=.o)

BO_OBJS =	$(BO_SRCS:.c=.o)

CC =		gcc

AR =		ar

CFLAGS =	-Wall -Wextra -Werror -Iincludes

RM =		rm -f

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(AR) rc $(NAME) $(OBJS)

bonus: $(OBJS) $(BO_OBJS)
	$(AR) rc $(NAME) $(OBJS) $(BO_OBJS)

test:
	$(CC) main.c $(SRCS) -fsanitize=address -o test
	./test
	$(RM) test

clean:
	$(RM) $(OBJS)
	$(RM) $(BO_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
