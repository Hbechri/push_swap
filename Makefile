# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/05 12:55:37 by hbechri           #+#    #+#              #
#    Updated: 2023/07/05 12:57:27 by hbechri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME_BONUS = checker
CC = cc
FLAGS = -Wall -Wextra -Werror
SRCS = 

SRCS_BONUS = 

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

all : $(NAME)

bonus : $(NAME_BONUS)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(NAME_BONUS) : $(OBJS_BONUS)
	$(CC) $(FLAGS) $(OBJS_BONUS) -o $(NAME_BONUS)

clean :
	rm -rf $(OBJS)
	rm -rf $(OBJS_BONUS)
	
fclean : clean
	rm -rf $(NAME)
	rm -rf $(NAME_BONUS)

re : fclean all