#include "../include/HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	weapon = NULL;
}

void HumanB::setName(std::string name)
{
	this->name = name;
}

std::string const &HumanB::getName(void)
{
	return (this->name);
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack(void)
{
	if(weapon == NULL)
		std::cout<<name<<" attacks with his fists "<<std::endl;
	else
		std::cout<<name<<" attacks with his "<<weapon->getType()<<std::endl;
}
HumanB::~HumanB()
{
}