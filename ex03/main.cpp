#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap dm("44");
	dm.attack("Paris sud");
	dm.beRepaired(5);
	dm.takeDamage(4);
	dm.whoAmI();
	dm.highFivesGuys();

	return 0;
}
