# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmaury <fmaury@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 11:00:31 by fmaury            #+#    #+#              #
#    Updated: 2019/05/10 13:05:06 by fmaury           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libfts.a

LIN_COMPILER		= nasm -f elf64

MAC_COMPILER		= nasm -f macho64

CC_FLAGS		= -Wall -Werror -Wextra

LIB_SRCS_DIR		= ./srcs

LIB_OBJS_DIR		= ./.objs

INC       =   libftasm.h

LIB_SRC		=	ft_isdigit.s \
				ft_tolower.s \
				ft_toupper.s \
				ft_islower.s \
				ft_isupper.s \
				ft_isalpha.s \
				ft_isprint.s \
				ft_isalnum.s \
				ft_isascii.s \
				ft_bzero.s \
				ft_puts.s \
				ft_strlen.s \
				ft_memset.s \
				ft_memcpy.s \
				ft_strdup.s \
				ft_strcat.s

LIB_OBJ		= $(LIB_SRC:.s=.o)

LIB_SRCS	= $(addprefix $(LIB_SRCS_DIR)/, $(LIB_SRC))

LIB_OBJS	= $(addprefix $(LIB_OBJS_DIR)/, $(LIB_OBJ))

all : $(NAME)

$(NAME): $(LIB_OBJS) $(INC)
	ar rc $(NAME) $(LIB_OBJS)

$(LIB_OBJS_DIR)/%.o: $(LIB_SRCS_DIR)/%.s
	mkdir -p $(LIB_OBJS_DIR)
	$(MAC_COMPILER) $< -o $@

clean:
	rm -rf $(LIB_OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean 
	$(MAKE) all

.PHONY: all clean fclean re
