# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/12 17:32:12 by mmarzouk          #+#    #+#              #
#    Updated: 2021/06/12 18:51:00 by mmarzouk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

FLAGS = -Wall -Wextra -Werror

SRCS = ./srcs/p_swap.c ./srcs/s_tools.c ./srcs/check.c ./srcs/linked_list.c\
		./srcs/tools.c

all:$(NAME)

$(NAME): $(SRCS)
	@gcc $(FLAGS) $(SRCS) -o $(NAME)

clean:
	@rm $(NAME)
	
fclean: clean

re : fclean all

.PHONY: all clean fclean re