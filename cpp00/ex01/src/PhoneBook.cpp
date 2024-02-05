#include "../include/PhoneBook.hpp"
#include <iomanip>
#include <stdlib.h>

PhoneBook::PhoneBook()
{
	for(int i = 0;i<8;i++)
	{
		list[i] = 0;
	}
	addNumber=0;
}
PhoneBook::~PhoneBook()
{
	int i = 0;
	while(i < 8)
	{
		if(list[i])
			delete list[i];
		i++;	
	}
}
void PhoneBook::ADD()
{
	std::string name,surName,nickName,phoneNumber,darkestSecret;
	std::cout<<"Name: ";
	std::cin>> name;
	std::cout<<"Surname: ";
	std::cin>> surName;
	std::cout<<"Nickname: ";
	std::cin>> nickName;
	std::cout<<"Phone Number: ";
	std::cin>> phoneNumber;
	std::cout<<"Darkest Secret: ";
	std::cin>> darkestSecret;
	std::cout<<std::endl;
	Contact *a = new Contact(name,surName,nickName,phoneNumber,darkestSecret);
	if(list[addNumber])
		delete list[addNumber];
	list[addNumber] = a;
	addNumber++;
	addNumber %= 8;
}
void PhoneBook::printValue(std::string value,int space)
{
	if(value.length()>10)
	{
		std::cout<<value.substr(0,9)<<".";
	}else
	{
		std::cout<<std::setw(space)<<value;
	}
}
void PhoneBook::printList()
{
	for(int i = 0; i< 45;i++)
	{
		std::cout<<"-";
	}
	std::cout<<std::endl;
	std::cout<<"|";
	printValue("Index");
	std::cout<<"|";
	printValue("Firstname");
	std::cout<<"|";
	printValue("Surname");
	std::cout<<"|";
	printValue("Nickname");
	std::cout<<"|"<<std::endl<<"|";
	for(int i = 0; i< 43;i++)
	{
		std::cout<<"-";
	}
	std::cout<<"|"<<std::endl;
	for(int i = 0;list[i] && i<8;i++)
	{
		std::cout<<"|"<<std::setw(10)<<i<<"|";
		printValue(list[i]->getName());
		std::cout<<"|";
		printValue(list[i]->getsurName());
		std::cout<<"|";
		printValue(list[i]->getnickName());
		std::cout<<"|"<<std::endl;
	}
	for(int i = 0; i< 45;i++)
	{
		std::cout<<"-";
	}
	std::cout<<std::endl;
}
void PhoneBook::SEARCH()
{
	std::string choice;
	int index;
	printList();
	std::cout<<"Index: ";
	std::cin>>choice;
	index = std::atoi(choice.c_str());//String to char* 
	if(index >= 0 && index < 8 && list[index])
	{
		std::cout	<<"Name           :"<<list[index]->getName()		 <<std::endl
					<<"Surname        :"<<list[index]->getsurName()	     <<std::endl
					<<"Nickname       :"<<list[index]->getnickName()	 <<std::endl
					<<"Tel. No        :"<<list[index]->getphoneNumber()	 <<std::endl
					<<"Darkest Secret :"<<list[index]->getdarkestSecret()<<std::endl;
	}else
	{
		std::cout<<"There is no such person"<<std::endl;
	}
}
void PhoneBook::EXIT()
{
	exit(0);
}