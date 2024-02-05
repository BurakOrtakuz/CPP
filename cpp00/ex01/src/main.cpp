#include "../include/PhoneBook.hpp"

int main(void)
{
	PhoneBook phoneBook;
	std::string choice;
	while(1)
	{
		choice = "";
		std::cout<<"Choice Command"<<std::endl;
		std::cout<<"1-ADD"<<std::endl;
		std::cout<<"2-SEARCH"<<std::endl;
		std::cout<<"3-EXIT"<<std::endl;
		std::cin>>choice;
		if(!choice.compare("ADD"))
			phoneBook.ADD();
		else if(!choice.compare("SEARCH"))
			phoneBook.SEARCH();
		else if(!choice.compare("EXIT"))
			phoneBook.EXIT();
	}
}