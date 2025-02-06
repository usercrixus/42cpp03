#ifndef CLAPTRAP
# define CLAPTRAP

# include <string>
# include <iostream>

class ClapTrap
{
private:
	std::string _name;
	int _hit;
	int _energy;
	int _damage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(const ClapTrap &);
	ClapTrap &operator=(const ClapTrap&);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	int getEnergy() const;
	void setEnergy(int energy);
	int getHit() const;
	void setHit(int hit);
	int getDamage() const;
	void setDamage(int damage);
	std::string getName() const;
	void setName(std::string name);
};

#endif