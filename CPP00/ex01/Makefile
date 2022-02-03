# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/25 08:50:43 by slathouw          #+#    #+#              #
#    Updated: 2022/02/03 09:51:52 by slathouw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RESET = \033[0m
RED = \033[0;91m
ORANGE = \033[93m
GREEN = \033[0;92m
PURPLE = \033[0;95m
BLUE = \033[0;34m
BOLD = \033[1m

SRCS		=	./main.cpp ./Contact.cpp

INCLUDES	=	.

NAME		= phonebook

CC			= c++

OBJS		= ${SRCS:.cpp=.o}

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror -std=c++98



.c.o:
		@${CC} ${CFLAGS} -I${INCLUDES} -c $< -o ${<:.cpp=.o}
		@echo "${GREEN}[ OK ]	${ORANGE}${<:.s=.o}${RESET}"


all:		${NAME}

${NAME}:	${OBJS}
			@${CC} ${CFLAGS} -I${INCLUDES} -o ${NAME} $(OBJS)
			@echo "${GREEN}megaphone  program	has been created${RESET}"

clean:
			@${RM} ${OBJS}
			@echo "${GREEN}[ OK ]${RED}	*.o files	deleted${RESET}"

fclean:		clean
			@${RM} ${NAME}
			@echo "${GREEN}[ OK ]${RED}	megaphone program	deleted${RESET}"

re :		fclean all

.PHONY:		all	clean	fclean re