#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():
ClapTrap(),
_name("")
{
    this->setHit(FragTrap::getHit());
    this->setEnergy(ScavTrap::getEnergy());
    this->setDamage(FragTrap::getDamage());
	std::cout << "DiamondTrap default destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) :
ClapTrap(name + "_clap_name"),
_name(name)
{
    this->setHit(FragTrap::getHit());
    this->setEnergy(ScavTrap::getEnergy());
    this->setDamage(FragTrap::getDamage());
	std::cout << "DiamondTrap parameterized constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &cpy)
{
	this->setName(cpy.getName());
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "name: " << _name << " ClapTrap name: " << ClapTrap::getName() << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}