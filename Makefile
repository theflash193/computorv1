# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/19 18:16:35 by zsina             #+#    #+#              #
#    Updated: 2015/06/09 11:17:25 by grass-kw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = computor
FLAGS = -g

SRCDIR = src/

SRC = 	$(SRCDIR)main.c \
		$(SRCDIR)lexical_analysis.c \
		$(SRCDIR)reduce_form.c \
		$(SRCDIR)resolve_equation.c \
		$(SRCDIR)ft_printpoly.c \
		$(SRCDIR)ft_polynew.c \
		$(SRCDIR)ft_polyadd.c \
		$(SRCDIR)ft_putdouble.c \
		$(SRCDIR)ft_atol.c \
		$(SRCDIR)resolve_first_degree.c \
		$(SRCDIR)resolve_second_degree.c \
		$(SRCDIR)ft_error.c \
		$(SRCDIR)ft_atof.c \
		$(SRCDIR)clear_env.c \
		$(SRCDIR)ft_polydel.c \
		$(SRCDIR)math_tools.c \
		$(SRCDIR)calcul_add_value.c

INC = inc

OBJ = $(SRC:.c=.o)

all: lib $(NAME)

$(NAME): $(OBJ)
	@echo "-> Creating $(NAME)..."
	@gcc $(FLAGS) -o $(NAME) $(OBJ) -I $(INC) -I libft/includes -L libft/ -lft
%.o:%.c
	@echo "-> Compiling $<..."
	@gcc $(FLAGS) -c -o $@ $< -I $(INC) -I libft/includes

lib:
	@echo "-> Compiling libft..."
	make -C ./libft
clean:
	@echo "-> Cleaning object files..."
	rm -f $(OBJ)

fclean: clean
	@echo "-> Cleaning $(NAME)..."
	rm -f $(NAME)
	make fclean -C ./libft

help:
	@echo "fclean"
	@echo "clean"
	@echo "fclean"

re:	fclean all

.PHONY: $(NAME) all lib clean fclean re
