#include "ScavTrap.hpp"

ScavTrap::ScavTrap():
ClapTrap()
{
	setEnergy(50);
	setDamage(20);
	setHit(100);
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name):
ClapTrap(name)
{
	setEnergy(50);
	setDamage(20);
	setHit(100);
	std::cout << "ScavTrap parameterized constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &cpy):
ClapTrap(cpy.getName())
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap &cpy)
{
	this->setName(cpy.getName());
	std::cout << "ScavTrap copy operator called" << std::endl;
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (getEnergy() > 0)
	{
		std::cout << "ScavTrap " << getName() << " attacks " << target << " causing " << getDamage() << " points of damage!" << std::endl;
		setEnergy(getEnergy() - 1);
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
