# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nibrahee <nibrahee@learner.42.tech>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/08 15:54:09 by nibrahee          #+#    #+#              #
#    Updated: 2026/02/08 16:25:40 by nibrahee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I include
SRCS = operations/push.c \
       operations/op_swap.c \
       operations/op_rotate.c \
       operations/op_reverse_rotate.c \
       sort/radix.c \
       sort/selection_sort.c \
       sort/sort_2.c \
       sort/sort_3.c \
       sort/chunk_sorting.c \
       sort/chunk_sorting_utils.c \
       utils/error.c \
       utils/free.c \
       utils/is_sorted.c \
       utils/print_stack.c \
       utils/set_index.c \
       utils/parse.c \
       utils/checker.c \
       utils/disorder.c \
       utils/bench.c \
       main/main.c \
       utils/stack.c


OBJS = $(SRCS:.c=.o)

LIBFT_DIR = libft
PRINTF_DIR = printf
LIBFT = $(LIBFT_DIR)/libft.a
PRINTF = $(PRINTF_DIR)/libftprintf.a

LIBS        = -L$(LIBFT_DIR) -lft -L$(PRINTF_DIR) -lftprintf

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) $(OBJS) $(LIBS) -o $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)
$(PRINTF):
	$(MAKE) -C $(PRINTF_DIR)
	
%.o:%.c 
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	rm -f $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(PRINTF_DIR) clean

fclean: clean
	rm -f $(NAME) 
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(PRINTF_DIR) fclean

re: fclean all

.PHONY: all clean fclean re

