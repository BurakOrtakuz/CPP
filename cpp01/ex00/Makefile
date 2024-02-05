NAME	=	Zombie

FLAG	=	-Wall -Wextra -Werror -std=c++98

SRC		=	./src/Zombie.cpp \
			./src/newZombie.cpp \
			./src/randomChump.cpp \
			./src/main.cpp
CC		=	c++

RM		=	rm -rf

all: $(NAME)

$(NAME):
	@$(CC) $(SRC) $(FLAG) -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean : clean

re: fclean all

.PHONY: all clean fclean re