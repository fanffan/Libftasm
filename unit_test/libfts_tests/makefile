NAME			= unit_test

COMPILER		= clang

CC_FLAGS		= -Wextra -Wall -Werror -g 

FRAMEWORK		= ../framework/libunit.a

INC_UNIT		= ../framework/libunit.h

INC_REAL		= ./libfts_tests.h

INC_LIBFTS		= ../../libftasm.h

LIBASM			= ../../libfts.a

MAIN			= main.c

######################################################################################

SRC_DIR_ISALNUM	= ./isalnum_tests

SRC_ISALNUM		= 00_isalnum_launcher.c\
				  01_num_test.c\
				  02_char_test.c\
				  03_hardnum_test.c

SRCS_ISALNUM	= $(addprefix $(SRC_DIR_ISALNUM)/, $(SRC_ISALNUM))

######################################################################################

SRC_DIR_ISALPHA	= ./isalpha_tests

SRC_ISALPHA		= 00_isalpha_launcher.c\
				  01_lower_test.c\
				  02_upper_test.c\
				  03_hardpha_test.c

SRCS_ISALPHA	= $(addprefix $(SRC_DIR_ISALPHA)/, $(SRC_ISALPHA))

######################################################################################

SRC_DIR_ISASCII	= ./isascii_tests

SRC_ISASCII		= 00_isascii_launcher.c\
				  01_lower_test.c\
				  02_upper_test.c\
				  03_hardscii_test.c

SRCS_ISASCII	= $(addprefix $(SRC_DIR_ISASCII)/, $(SRC_ISASCII))

######################################################################################

SRC_DIR_ISDIGIT	= ./isdigit_tests

SRC_ISDIGIT		= 00_isdigit_launcher.c\
				  01_lower_test.c\
				  02_upper_test.c\
				  03_hardigit_test.c

SRCS_ISDIGIT	= $(addprefix $(SRC_DIR_ISDIGIT)/, $(SRC_ISDIGIT))

######################################################################################

SRC_DIR_TOLOWER	= ./tolower_tests

SRC_TOLOWER		= 00_tolower_launcher.c\
				  01_lower_test.c\
				  02_upper_test.c\
				  03_hardlower_test.c

SRCS_TOLOWER	= $(addprefix $(SRC_DIR_TOLOWER)/, $(SRC_TOLOWER))

######################################################################################

SRC_DIR_TOUPPER	= ./toupper_tests

SRC_TOUPPER		= 00_toupper_launcher.c\
				  01_easy_test.c\
				  02_medium_test.c\
				  03_hard_test.c

SRCS_TOUPPER	= $(addprefix $(SRC_DIR_TOUPPER)/, $(SRC_TOUPPER))

######################################################################################

SRC_DIR_ISPRINT	= ./isprint_tests

SRC_ISPRINT		= 00_isprint_launcher.c\
				  01_easy_test.c\
				  02_medium_test.c\
				  03_hard_test.c

SRCS_ISPRINT	= $(addprefix $(SRC_DIR_ISPRINT)/, $(SRC_ISPRINT))

######################################################################################

SRC_DIR_STRCAT	= ./strcat_tests

SRC_STRCAT		= 00_strcat_launcher.c\
				  01_easy_test.c\
				  02_medium_test.c\
				  03_hard_test.c

SRCS_STRCAT	= $(addprefix $(SRC_DIR_STRCAT)/, $(SRC_STRCAT))

######################################################################################

SRC_DIR_STRLEN	= ./strlen_tests

SRC_STRLEN		= 00_strlen_launcher.c\
				  01_easy_test.c\
				  02_medium_test.c\
				  03_hard_test.c

SRCS_STRLEN	= $(addprefix $(SRC_DIR_STRLEN)/, $(SRC_STRLEN))

######################################################################################

SRC_DIR_MEMSET	= ./memset_tests

SRC_MEMSET		= 00_memset_launcher.c\
				  01_easy_test.c\
				  02_medium_test.c\
				  03_hard_test.c

SRCS_MEMSET	= $(addprefix $(SRC_DIR_MEMSET)/, $(SRC_MEMSET))

######################################################################################

SRC_DIR_STRDUP	= ./strdup_tests

SRC_STRDUP		= 00_strdup_launcher.c\
				  01_easy_test.c\
				  02_medium_test.c\
				  03_hard_test.c

SRCS_STRDUP	= $(addprefix $(SRC_DIR_STRDUP)/, $(SRC_STRDUP))

######################################################################################

SRC_DIR_MEMCPY	= ./memcpy_tests

SRC_MEMCPY		= 00_memcpy_launcher.c\
				  01_easy_test.c\
				  02_medium_test.c\
				  03_hard_test.c

SRCS_MEMCPY	= $(addprefix $(SRC_DIR_MEMCPY)/, $(SRC_MEMCPY))

######################################################################################

SRC_DIR_CAT	= ./cat_tests

SRC_CAT		= 00_cat_launcher.c\
				  01_easy_test.c\
				  02_medium_test.c\
				  03_hard_test.c

SRCS_CAT	= $(addprefix $(SRC_DIR_CAT)/, $(SRC_CAT))

######################################################################################

SRC_DIR_BZERO	= ./bzero_tests

SRC_BZERO		= 00_bzero_launcher.c\
				  01_easy_test.c\
				  02_medium_test.c\
				  03_hard_test.c

SRCS_BZERO	= $(addprefix $(SRC_DIR_BZERO)/, $(SRC_BZERO))

######################################################################################

SRC_DIR_ISLOWER	= ./islower_tests

SRC_ISLOWER		= 00_islower_launcher.c\
				  01_easy_test.c\
				  02_medium_test.c\
				  03_hard_test.c

SRCS_ISLOWER	= $(addprefix $(SRC_DIR_ISLOWER)/, $(SRC_ISLOWER))

######################################################################################

all: $(NAME)

$(NAME): $(ALL_SRCS) $(INC_UNIT) $(INC_REAL) $(INC_LIBFTS)
		$(MAKE) -C ../..
		$(MAKE) -C ../framework/
		$(COMPILER) $(CC_FLAGS) $(LIBASM) $(FRAMEWORK) $(MAIN) $(SRCS_ISLOWER) $(SRCS_BZERO) $(SRCS_CAT) $(SRCS_MEMCPY) $(SRCS_STRDUP) $(SRCS_MEMSET) $(SRCS_ISALNUM) $(SRCS_ISALPHA) $(SRCS_ISASCII) $(SRCS_ISDIGIT) $(SRCS_STRCAT) $(SRCS_ISPRINT) $(SRCS_TOLOWER) $(SRCS_TOUPPER)  $(SRCS_STRLEN) -o tests

clean:
		rm -rf $(OBJ_DIR)

fclean: clean
		rm -rf $(NAME)
		
re: fclean all

test:	$(NAME)
		./tests
