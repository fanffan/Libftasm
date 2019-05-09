NAME			= unit_test

COMPILER		= clang

CC_FLAGS		= -Wextra -Wall -Werror -g

FRAMEWORK		= ../framework/libunit.a

INC_UNIT		= ../framework/libunit.h

INC_REAL		= ./libfts_tests.h

INC_LIBFTS		= ../../libftasm.h

LIBASM			= ../../libfts.a

MAIN			= main.c

SRC_DIR_ISALNUM	= ./isalnum_tests

SRC_ISALNUM		= 00_isalnum_launcher.c\
				  01_num_test.c\
				  02_char_test.c\
				  03_hash_test.c

SRCS_ISALNUM	= $(addprefix $(SRC_DIR_ISALNUM)/, $(SRC_ISALNUM))

all: $(NAME)

$(NAME): $(FRAMEWORK) $(SRCS_ISALNUM) $(INC_UNIT) $(INC_REAL) $(INC_LIBFTS)
		 $(COMPILER) $(CC_FLAGS) -I $(INC_REAL) -I $(INC_UNIT) $(LIBASM) $(FRAMEWORK) $(MAIN) $(SRCS_ISALNUM) -o tests
	
$(FRAMEWORK):
		$(MAKE) -C ../framework/

clean:
		rm -rf $(OBJ_DIR)

fclean: clean
		rm -rf $(NAME)
		
re: fclean all

test:	$(NAME)
		./tests
