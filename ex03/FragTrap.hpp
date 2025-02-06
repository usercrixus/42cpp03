#ifndef FRAGTRAP
# define FRAGTRAP

# include "ClapTrap.hpp"
# include <string>
# include <iostream>

class FragTrap : virtual public ClapTrap
{
private:
	/* data */
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap&);
	FragTrap& operator=(FragTrap&);
	~FragTrap();
	void attack(const std::string &target);
	void highFivesGuys(void);
};

#endif