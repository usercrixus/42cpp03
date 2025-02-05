OBJ = \
		ClapTrap.o \
		main.o \

all: claptrap

claptrap: $(OBJ)
	c++ $^ -o $@

%.o: %.cpp
	c++ -std=c++98 -Wall -Werror -Wextra -c $^ -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f claptrap

re: fclean all

.PHONY: clean fclean re