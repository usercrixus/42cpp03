#include "ScavTrap.hpp"

int main()
{
	ScavTrap ct("42");
	std::cout << ct.getName() << " have hit: " << ct.getHit() << " energy: " << ct.getEnergy() << std::endl;
	ct.attack("Paris sud");
	ct.beRepaired(5);
	ct.takeDamage(4);
	std::cout << ct.getName() << " have hit: " << ct.getHit() << " energy: " << ct.getEnergy() << std::endl;
	return 0;
}
