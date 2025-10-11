# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/16 14:35:22 by bfernan2          #+#    #+#              #
#    Updated: 2025/10/11 16:21:04 by bfernan2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= push_swap

SRC = main.c validations.c stack_utils.c \
operations.c swap.c push.c rotate.c reverse_rotate.c \
push_swap_utils.c index.c small_order.c 

OBJ= $(SRC:.c=.o)
CC= cc
CFLAGS= #-Wall -Wextra -Werror
LIBFT_DIR= ./libft/
LIBFT= $(LIBFT_DIR)libft.a

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

$(LIBFT):
	@$(MAKE) -s -C $(LIBFT_DIR) all

clean:
	@rm -f $(OBJ)
	@$(MAKE) -s -C $(LIBFT_DIR) clean

fclean: clean
	@rm -f $(NAME)
	@$(MAKE) -s -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re