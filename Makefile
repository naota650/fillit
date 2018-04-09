# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmartine <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/09 12:52:16 by lmartine          #+#    #+#              #
#    Updated: 2018/04/09 12:52:51 by lmartine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = fillit

HEADER = fillit.h

FLAGS = -Wall -Wextra -Werror

SRCS = check.c main.c maker.c solve.c split.c

LIB = libft/libft.a

all: $(NAME)

$(LIB):
	@make -C libft

$(NAME): $(LIB)
	@gcc $(FLAGS) -g $(SRCS) $(LIB) -I $(HEADER) -o $(NAME)

clean:
	@make -C libft clean

fclean: clean
	@rm -rf $(NAME)
	@make -C libft fclean

re: fclean all
