MAKEFLAGS += -s  # global silence mode

CXX       = c++
HDRS      = ./includes
CXXFLAGS  = -Wall -Wextra -Werror -std=c++98 -g -I $(HDRS)

SRCS      = main.cpp $(shell find srcs -name "*.cpp")

OBJ_DIR   = obj
SRC_O     = $(patsubst %.cpp, $(OBJ_DIR)/%.o, $(SRCS))

NAME      = libftcpp

RM        = rm -f
CYAN      = "\033[36m"
RED       = "\033[31m"
GREEN     = "\033[32m"
RESET     = "\033[0m"

all: $(NAME)

$(NAME): $(SRC_O)
	@echo $(CYAN)"Creation of $(NAME) executable..."$(RESET)
	@$(CXX) $(CXXFLAGS) $(SRC_O) -o $(NAME)
	@echo $(GREEN) "\"$(NAME)\" executable created !"$(RESET)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	@echo $(CYAN)"Compilation of $<..."$(RESET)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@echo $(CYAN)"Object files suppression..."$(RESET)
	@$(RM) -r $(OBJ_DIR)

fclean: clean
	@echo $(CYAN)"Executable suppression..."$(RESET)
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
