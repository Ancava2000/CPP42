CYAN_2	=	\033[38;5;50m

SRC = main.cpp Animal/Animal.cpp Dog/Dog.cpp Cat/Cat.cpp WrongAnimal/WrongAnimal.cpp WrongCat/WrongCat.cpp Brain/Brain.cpp
NAME = animal_brain
CC = c++ -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	@$(CC) $(SRC) -o $(NAME)
	@echo "$(CYAN_2)Compiling..."

clean:
	@rm -rf $(NAME)
	@echo "$(CYAN_2)Cleaning..."

fclean: clean

re: fclean all