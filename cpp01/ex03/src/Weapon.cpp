#include "../include/Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}
Weapon::Weapon()
{
	this->type = "fist";
}	
Weapon::~Weapon()
{
}

std::string const &Weapon::getType(void)
{
	return (this->type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}