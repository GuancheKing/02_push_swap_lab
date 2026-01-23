# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: josjimen <josjimen@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/11 18:55:35 by josjimen          #+#    #+#              #
#    Updated: 2026/01/23 18:00:15 by josjimen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = 	dispatcher_strategy.c \
		ft_atol.c \
		ft_isdigit.c \
		ft_lstlast.c \
		ft_memcpy.c \
		ft_split.c \
		ft_strlen.c \
		ft_substr.c \
		helpers_basic.c \
		helpers_minmax.c \
		helpers_range.c \
		index_stack.c \
		ops_primitives.c \
		ops_wrap_push.c \
		ops_wrap_rev_rotate.c \
		ops_wrap_rotate.c \
		ops_wrap_swap.c \
		parse_utils.c \
		parse.c \
		push_swap.c \
		sort_k_pull.c \
		sort_k_push.c \
		sort_k.c \
		sort_small_3.c \
		sort_small_5.c

CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)
fclean: clean
	rm -f $(NAME) push_swap.a
re: fclean $(NAME)

.PHONY: all clean fclean re