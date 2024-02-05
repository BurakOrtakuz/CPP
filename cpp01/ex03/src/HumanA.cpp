#include "../include/HumanA.hpp"

// Referans olan weapon başlangıç değeri alamadığı için yanında tanımlama yapmak gerekiyor.
HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
	this->name = name;
}
void HumanA::attack(void)
{
	std::cout<<name<<" attacks with his "<<weapon.getType()<<std::endl;
}

HumanA::~HumanA()
{
}