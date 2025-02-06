#ifndef SCAVTRAP
# define SCAVTRAP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	/* data */
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap&);
	ScavTrap &operator=(ScavTrap&);
	~ScavTrap();
	void attack(const std::string &target);
	void guardGate();
};

#endif