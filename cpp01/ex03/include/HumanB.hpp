#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "../include/Weapon.hpp"
#include <iostream>
class HumanB
{	
private:
	std::string name;
	Weapon *weapon;
public:
	HumanB(std::string name);
	void setName(std::string name);
	std::string const &getName(void);
	void setWeapon(Weapon &weapon);
	void attack(void);
	~HumanB();
};
#endif