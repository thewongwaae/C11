SRCS	= srcs/do-op.c srcs/operations.c srcs/ft_atoi.c srcs/ft_putnbr.c
OBJS	= ${SRCS:.c=.o}
INCS	= includes
NAME	= do-op
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

all:
	${CC} ${CFLAGS} ${SRCS} -I ${INCS} -o ${NAME}

clean:
	${RM} ${NAME}
	
re: clean all