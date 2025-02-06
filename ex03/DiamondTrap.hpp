#ifndef DIAMONDTRAP
# define DIAMONDTRAP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
private:
	std::string _name;
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap&);
	DiamondTrap& operator=()
	~DiamondTrap();
	void whoAmI();
	void attack(const std::string& target);
};

#endif