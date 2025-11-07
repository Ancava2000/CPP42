CYAN_2	=	\033[38;5;50m

SRC = *.cpp
NAME = Account
CC = c++ -std=c++98 -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	@$(CC) $(SRC) -o $(NAME)
	@echo "$(CYAN_2)Compiling..."

clean:
	@rm -rf $(NAME)
	@echo "$(CYAN_2)Cleaning..."

fclean: clean

re: fclean all