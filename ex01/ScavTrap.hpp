#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	/* data */
public:
	ScavTrap(std::string name);
	~ScavTrap();
	void attack(const std::string &target);
	void guardGate();
};

