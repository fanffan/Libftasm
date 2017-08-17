#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmaury <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 11:00:31 by fmaury            #+#    #+#              #
#    Updated: 2017/06/08 15:39:27 by fmaury           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME			= libftasm.a

COMPILER		= nasm -f elf64

CC_FLAGS		= -Wall -Werror -Wextra -g

LIB_SRC_DIR		= ./src

INC       =   libftasm.h

LIB_SRC		=	ft_isdigit.s \
            ft_tolower.s \
            ft_toupper.s \
            ft_islower.s \
            ft_isupper.s \
            ft_isalpha.s 

LIB_OBJ		= $(LIB_SRC:.s=.o)

LIB_SRCS	= $(addprefix $(LIB_SRC_DIR)/, $(LIB_SRC))

NEWLINE		= @echo ""

all : $(NAME)

$(NAME): $(LIB_OBJ) $(INC)
	ar rc $(NAME) $(LIB_OBJ)

%.o: $(LIB_SRC_DIR)/%.s
	$(COMPILER) $< -o $@

clean:
	rm -rf $(LIB_OBJ) $(PNTF_OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean 
	$(MAKE) all

.PHONY: all clean fclean re
