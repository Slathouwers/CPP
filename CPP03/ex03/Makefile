# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slathouw <slathouw@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/25 08:50:43 by slathouw          #+#    #+#              #
#    Updated: 2022/02/21 13:18:30 by slathouw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

INCLUDES	=	.

NAME		= NowItsWeird

CC			= c++

OBJS		= ${SRCS:.cpp=.o}

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror -std=c++98

.c.o:
		@${CC} ${CFLAGS} -I${INCLUDES} -c $< -o ${<:.cpp=.o}
		@echo "${<:.s=.o}"


all:		${NAME}

${NAME}:	${OBJS}
			@${CC} ${CFLAGS} -I${INCLUDES} -o ${NAME} $(OBJS)
			@echo "${NAME}  program	has been create"

clean:
			@${RM} ${OBJS}
			@echo "*.o files	deleted"

fclean:		clean
			@${RM} ${NAME}
			@echo "${NAME} program	deleted"

re :		fclean all

.PHONY:		all	clean	fclean re