# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/12 17:32:12 by mmarzouk          #+#    #+#              #
#    Updated: 2021/09/06 17:49:41 by mmarzouk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

FLAGS = -Wall -Wextra -Werror -fsanitize=address -g

SRCS = ./srcs/p_swap.c ./srcs/s_tools.c ./srcs/check.c ./srcs/linked_list.c\
		./srcs/tools.c ./srcs/ops.c ./srcs/ops2.c ./srcs/indexing.c ./srcs/sorting.c

all:$(NAME)

$(NAME): $(SRCS)
	@gcc $(FLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -rf $(NAME)
	
fclean: clean

re : fclean all

.PHONY: all clean fclean re