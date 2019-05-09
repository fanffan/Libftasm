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
				  03_hardnum_test.c

SRC_DIR_ISALPHA	= ./isalpha_tests

SRCS_ISALNUM	= $(addprefix $(SRC_DIR_ISALNUM)/, $(SRC_ISALNUM))

SRC_ISALPHA		= 00_isalpha_launcher.c\
				  01_lower_test.c\
				  02_upper_test.c\
				  03_hardpha_test.c

SRCS_ISALPHA	= $(addprefix $(SRC_DIR_ISALPHA)/, $(SRC_ISALPHA))

all: $(NAME)

$(NAME): $(INC_UNIT) $(INC_REAL) $(INC_LIBFTS)
		$(MAKE) -C ../framework/
		 $(COMPILER) $(CC_FLAGS) $(LIBASM) $(FRAMEWORK) $(MAIN) $(SRCS_ISALNUM) $(SRCS_ISALPHA) -o tests

clean:
		rm -rf $(OBJ_DIR)

fclean: clean
		rm -rf $(NAME)
		
re: fclean all

test:	$(NAME)
		./tests
