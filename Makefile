# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: fbes <fbes@student.codam.nl>                 +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/26 14:25:38 by fbes          #+#    #+#                  #
#    Updated: 2020/10/26 17:43:00 by fbes          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME =		libft.a

SRCS =		${wildcard ./*.c}

OBJS =		${SRCS:.c=.o}

CC =		gcc

AR =		ar

CFLAGS =	-Wall -Wextra -Werror -Iincludes

RM =		rm -f

all: ${NAME}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${AR} rc ${NAME} ${SRCS}

test:
	${CC} ${SRCS} -o test
	./test
	${RM} test

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
