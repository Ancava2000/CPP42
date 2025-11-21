CYAN_2	=	\033[38;5;50m

SRC = Bureaucrat/Bureaucrat.cpp AForm/AForm.cpp main.cpp ShrubberyCreationForm/ShrubberyCreationForm.cpp \
		PresidentialPardonForm/PresidentialPardonForm.cpp RobotomyRequestForm/RobotomyRequestForm.cpp \
			Intern/Intern.cpp
NAME = bureaucrat_intern
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