#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):
ClapTrap(name)
{
	setEnergy(50);
	setDamage(20);
	setHit(100);
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (getEnergy() > 0)
	{
		std::cout << "ClapTrap " << getName() << " attacks " << target << " causing " << getDamage() << " points of damage!" << std::endl;
		setEnergy(getEnergy() - 1);
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
