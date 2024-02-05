#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact *list[8];
	int addNumber;
	void printList();
	void printValue(std::string value,int space = 10);
public:
	PhoneBook();
	~PhoneBook();
	void ADD();
	void SEARCH();
	void EXIT();
};

#endif