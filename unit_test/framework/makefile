# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmaury <fmaurystudent.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 11:00:31 by fmaury            #+#    #+#              #
#    Updated: 2019/05/07 12:54:47 by fmaury           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libunit.a
COMPILER		= clang

CC_FLAGS		= -Wall -Werror -Wextra

LIBFT			= ../libft

INC				= ./libunit.h

FRAME_SRC_DIR	= .

FRAME_OBJ_DIR	= ./.objs

FRAME_SRC		= frame.c\
				  load_test.c\
				  lst.c
				  
FRAME_OBJ		= $(FRAME_SRC:.c=.o)

FRAME_SRCS		= $(addprefix $(FRAME_SRC_DIR)/, $(FRAME_SRC))

FRAME_OBJS		= $(addprefix $(FRAME_OBJ_DIR)/, $(FRAME_OBJ))

all : $(NAME)

$(NAME): $(FRAME_OBJS) $(INC)
	ar rc $(NAME) $(FRAME_OBJS)
	ranlib $(NAME)

$(FRAME_OBJ_DIR)/%.o: $(FRAME_SRC_DIR)/%.c
	mkdir -p $(FRAME_OBJ_DIR)
	$(COMPILER) $(CC_FLAGS) -I $(INC) -c $< -o $@
		

clean:
		rm -rf $(FRAME_OBJ_DIR)

fclean: clean
		rm -rf $(NAME)

re: fclean all
