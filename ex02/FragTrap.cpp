#include "FragTrap.hpp"

FragTrap::FragTrap():
ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name):
ClapTrap(name)
{
	setEnergy(100);
	setDamage(30);
	setHit(100);
	std::cout << "FragTrap parameterized constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &cpy):
ClapTrap(cpy.getName())
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap &cpy)
{
	this->setName(cpy.getName());
	std::cout << "FragTrap assignement operator called" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
	if (getEnergy() > 0)
	{
		std::cout << "FragTrap " << getName() << " attacks " << target << " causing " << getDamage() << " points of damage!" << std::endl;
		setEnergy(getEnergy() - 1);
	}
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Give me a high five" << std::endl;
}
