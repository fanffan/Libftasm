NAME			= unit_test
COMPILER		= clang
CC_FLAGS		= -Wextra -Wall -Werror

SRC_DIR_ISALNUM	= ./isalnum

FRAMEWORK		= ../framework/libunit.a

INC_UNIT		= ../framework/libunit.h

INC_REAL		= ./libasm_test.h

SRC_ISALNUM		= 00_isalnum_launcher.c\
				  01_num_test.c\
				  02_char_test.c\
				  03_hash_test.c
				  
LIBUNIT			= ../framework/libunit.a

LIBASM			= ../libfts.a

MAIN			= main.c

SRCS_LEN		= $(addprefix $(SRC_DIR_LEN)/, $(SRC_LEN))
SRCS_DUP		= $(addprefix $(SRC_DIR_DUP)/, $(SRC_DUP))
SRCS_ITOA		= $(addprefix $(SRC_DIR_ITOA)/, $(SRC_ITOA))
SRCS_ISALNUM	= $(addprefix $(SRC_DIR_ISALNUM)/, $(SRC_ISALNUM))

OBJS_LEN		= $(addprefix $(OBJ_DIR_LEN)/, $(OBJ_LEN))
OBJS_DUP		= $(addprefix $(OBJ_DIR_DUP)/, $(OBJ_DUP))
OBJS_ITOA		= $(addprefix $(OBJ_DIR_ITOA)/, $(OBJ_ITOA))

NEWLINE			= @echo ""

all: $(NAME)

$(NAME): $(FRAMEWORK) $(SRCS_ISALNUM) $(INC_UNIT) $(INC_REAL)
		 $(COMPILER) $(CC_FLAGS) $(SRCS_ISALNUM) -I $(INC_REAL) -I $(INC_UNIT) -o tests
	
$(FRAMEWORK):
		$(MAKE) -C ../framework/

clean:
		rm -rf $(OBJ_DIR)

fclean: clean
		rm -rf $(NAME)
		
re: fclean all

test:	$(NAME)
		./tests
