# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asirvent <asirvent@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 18:31:47 by asirvent          #+#    #+#              #
#    Updated: 2022/12/06 18:32:44 by asirvent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
MKFL	= Makefile

HEADER	= ft_printf.h
CFLAGS	= -Wall -Wextra -Werror
DFLAGS	= -MT $@ -MMD -MP

END_COLOR = \033[0;39m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m

RM = rm -f
AR = ar -rcs
CP = cp -f

LIB_DIR	= ./libft/
LIBFT = $(LIB_DIR)libft.a 

INCLUDE	= -I ./

FILES = ft_printf\
 		ft_print_args\
		ft_putchar\
		ft_putstr\
		ft_putnbr\
		ft_putnbrbase\
		ft_nbrbase\
		ft_putptr

SRC = $(addsuffix .c, $(FILES))
OBJ = $(SRC:.c=.o)
DEP = $(SRC:.c=.d)

#-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

%.o: %.c $(MKFL)
	@echo "$(RED)Compilando $(GREEN)$<$(END_COLOR)"
	@$(CC) -c $(CFLAGS) $(DFLAGS) $(INCLUDE) $< -o $@

all:
	@$(MAKE) -C $(LIB_DIR)
	@$(MAKE) $(NAME)

$(NAME):: $(OBJ)
	@$(CP) $(LIBFT) ./$(NAME)
	@$(AR) $(NAME) $(OBJ)
	@echo "$(GREEN)Printf se ha compilado con exito$(END_COLOR)"

$(NAME)::
	@echo "$(YELLOW)Nada más hacer para la librería ft_printf!$(END_COLOR)"

-include ${DEP}

clean:
	$(RM) $(OBJ) $(DEP)
	$(MAKE) clean -C $(LIB_DIR)

fclean:
	$(RM) $(OBJ) $(DEP) $(NAME)
	$(MAKE) fclean -C $(LIB_DIR)
	@echo "$(YELLOW)Todo limpio...$(END_COLOR)"
	
re:
	$(MAKE) fclean
	$(MAKE)

.PHONY: all clean fclean re

