# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/05 12:55:37 by hbechri           #+#    #+#              #
#    Updated: 2023/07/09 14:28:38 by hbechri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME_BONUS = checker
CC = cc
FLAGS = -Wall -Wextra -Werror
SRCS = libft/ft_atoi.c libft/ft_isdigit.c libft/ft_lstadd_back.c libft/ft_lstnew.c \
		libft/ft_lstsize.c libft/ft_putstr_fd.c libft/ft_split.c libft/ft_strdup.c \
		libft/ft_strjoin.c libft/ft_strlen.c moves/push.c moves/reverse_rotate.c \
		moves/rotate.c moves/swap.c error_msgs.c nbrs_checker.c push_swap.c \
		sorting_big_numbers.c sorting_small_numbers.c stack_manipulation.c

SRCS_BONUS = bonus/libft/ft_atoi.c bonus/libft/ft_isdigit.c bonus/libft/ft_lstadd_back.c\
				bonus/libft/ft_lstnew.c bonus/libft/ft_lstsize.c bonus/libft/ft_putstr_fd.c\
				bonus/libft/ft_split.c bonus/libft/ft_strcmp.c bonus/libft/ft_strjoin.c  bonus/checker.c \
				bonus/moves/push.c bonus/moves/reverse_rotate.c bonus/moves/rotate.c bonus/moves/swap.c\
				bonus/error_msgs.c bonus/nbrs_checker_bonus.c bonus/int_table.c bonus/read_from_input.c\
				bonus/stack_manipulation_bonus.c bonus/get_next_line/get_next_line.c bonus/get_next_line/get_next_line_utils.c\

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