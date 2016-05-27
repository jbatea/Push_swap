# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbateau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/03 14:55:10 by jbateau           #+#    #+#              #
#    Updated: 2016/05/25 17:18:45 by jbateau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_PATH = fpswap

OBJ_PATH = fpswap

NAME = push_swap

CC = clang

CFLAGS = -Wall -Wextra -Werror

SRC_NAME = main.c \
	      ft_getarg.c \
	      ft_checkarg.c \
	      ft_checkdup.c \
	      ft_lstinit.c \
	      ft_nodefree.c \
	      ft_lstadd.c \
	      ft_lstaddall.c \
	      ft_strtoi.c \
	      ft_exit.c \
	      ft_sa.c \
	      ft_ra.c \
	      ft_rra.c \
	      ft_printnode.c \
	      ft_issort.c \
	      ft_getflag.c \
	      ft_putstrcolor.c \
	      ft_findbestvalue.c \
	      ft_concatmove.c \
	      ft_resolve.c \
	      ft_highestval.c \
	      ft_sb.c \
	      ft_rb.c \
	      ft_rrb.c \
	      ft_pa.c \
	      ft_pb.c \
	      ft_lstdelone.c \
	      ft_lstadd_top.c \
		  ft_strdel.c \
		  ft_strtrimall.c \
		  ft_putendl.c \
		  ft_putstr.c \
		  ft_strcmp.c \
		  ft_putnbrl.c \
		  ft_putnbr.c \
		  ft_putchar.c \
		  ft_isdigit.c \
		  ft_atoi.c \
		  ft_strlen.c \

OBJ_NAME = $(SRC_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $^ -o $@

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -fv $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
