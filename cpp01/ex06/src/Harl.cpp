#include "../include/Harl.hpp"

void Harl::debug()
{
	std::cout <<"[DEBUG]"<< std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
	std::cout <<"[INFO]"<< std::endl;
	std::cout <<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout <<"[WARNING]"<< std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error()
{
	std::cout <<"[ERROR]"<< std::endl;
	std::cout << "This is unacceptable. I want to speak to the manager." << std::endl;
}

void Harl::complain(std::string level)
{
	int compare = -1;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for(int i = 0; i < 4; i++)
	{
		if(!level.compare(levels[i]))
		{
			compare = i;
			break;
		}	
	}
	switch (compare)
	{
	case 0:
		debug();
	case 1:
		info();
	case 2:
		warning();
	case 3:
		error();
	}
}