OBJ = \
		ClapTrap.o \
		ScavTrap.o \
		FragTrap.o \
		main.o \

all: scavtrap

scavtrap: $(OBJ)
	c++ $^ -o $@

%.o: %.cpp
	c++ -std=c++98 -Wall -Werror -Wextra -c $^ -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f scavtrap

re: fclean all

.PHONY: clean fclean re