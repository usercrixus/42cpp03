#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ScavTrap ct("42");
	std::cout << ct.getName() << " have hit: " << ct.getHit() << " energy: " << ct.getEnergy() << std::endl;
	ct.attack("Paris sud");
	ct.beRepaired(5);
	ct.takeDamage(4);
	std::cout << ct.getName() << " have hit: " << ct.getHit() << " energy: " << ct.getEnergy() << std::endl;
	FragTrap ft("43");
	std::cout << ft.getName() << " have hit: " << ft.getHit() << " energy: " << ft.getEnergy() << std::endl;
	ft.attack("Paris sud");
	ft.beRepaired(5);
	ft.takeDamage(4);
	ft.highFivesGuys();
	std::cout << ft.getName() << " have hit: " << ft.getHit() << " energy: " << ft.getEnergy() << std::endl;

	return 0;
}
