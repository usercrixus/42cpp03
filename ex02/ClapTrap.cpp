#include "./ClapTrap.hpp"
#include "ClapTrap.hpp"

ClapTrap::ClapTrap():
_name(""),
_hit(10),
_energy(10),
_damage(0)
{
	std::cout << "default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name):
_name(name),
_hit(10),
_energy(10),
_damage(0)
{
	std::cout << "parameterized constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &original)
{
	std::cout << "copy constructor called" << std::endl;
	this->setName(original.getName());
}

ClapTrap &ClapTrap::operator=(const ClapTrap &cpy)
{
	std::cout << "copy assignement operator called" << std::endl;
	this->setName(cpy.getName());
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (_energy > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _damage << " points of damage!" << std::endl;
		_energy--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << _name << " took " << amount << " damages" << std::endl;
	_hit -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy > 0)
	{
		std::cout << _name << " repaired itself by " << amount << " hits" << std::endl;
		_energy--;
		_hit += amount;
	}
}

int ClapTrap::getEnergy() const
{
	return _energy;
}

void ClapTrap::setEnergy(int energy)
{
	_energy = energy;
}

int ClapTrap::getHit() const
{
	return _hit;
}

void ClapTrap::setHit(int hit)
{
	_hit = hit;
}

int ClapTrap::getDamage() const
{
	return _damage;
}

void ClapTrap::setDamage(int damage)
{
	_damage = damage;
}

std::string ClapTrap::getName() const
{
	return _name;
}

void ClapTrap::setName(std::string name)
{
	_name = name;
}
