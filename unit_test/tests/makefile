NAME			= test.pp
COMPILER		= clang
CC_FLAGS		= -Wextra -Wall -Werror

SRC_DIR			= .
INC				= ../framework/libunit.h
OBJ_DIR			= objs
SRC				= 00_launcher.c\
				  01_test_ok.c\
				  02_test_ko.c\
				  03_test_segv.c\
				  04_test_buse.c
				  
LIBUNIT			= ../framework/libunit.a
MAIN			= main.c
OBJ				= $(SRC:.c=.o)
SRCS			= $(addprefix $(SRC_DIR)/, $(SRC))
OBJS			= $(addprefix $(OBJ_DIR)/, $(OBJ))

NEWLINE			= @echo ""

all: $(NAME)

$(NAME): $(SRC) $(INC)
		@echo "Verification de la presence du FrameWork et sa creation si necessaire."
		$(NEWLINE)
		@$(MAKE) -s -C ../framework/
		@echo "Compilation de l'executable de test du FrameWork"
		$(NEWLINE)
		@$(COMPILER) $(CC_FLAGS) $(SRCS) -L ../framework/ -lunit $(MAIN) -I ../framework/ -I ./ -o $(NAME)
		


clean:
		@echo "Removing objects (mais la il n'y en a pas)"
		$(NEWLINE)
		@rm -rf $(OBJ_DIR)

fclean: clean
		@echo "Removing TEST executable."
		$(NEWLINE)
		@rm -rf $(NAME)
		
re: fclean all

test:	$(NAME)
		#@echo "Lancement des tests du FrameWork."
		#$(NEWLINE)
		./test.pp
