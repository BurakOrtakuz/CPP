NAME	=	Phonebook

FLAG	=	-Wall -Wextra -Werror -std=c++98

SRC		=	./src/Contact.cpp \
			./src/PhoneBook.cpp \
			./src/main.cpp

CC		=	c++

RM		=	rm -rf

all: $(NAME)

$(NAME): clean
	@$(CC) $(SRC) $(FLAG) -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean : clean

re: fclean all

.PHONY: all clean fclean re