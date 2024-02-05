#include "../include/Contact.hpp"

Contact::Contact(std::string name,std::string surName,std::string nickName,std::string phoneNumber,std::string darkestSecret)
{
	this->name = name;
	this->surName = surName;
	this->nickName = nickName;
	this->phoneNumber = phoneNumber;
	this->darkestSecret = darkestSecret;
}
std::string Contact::getName() const {
	return name;
}

void Contact::setName(std::string name) {
	this->name = name;
}

std::string Contact::getsurName() const {
	return surName;
}

void Contact::setsurName(std::string surName) {
	this->surName = surName;
}
std::string Contact::getnickName() const {
	return nickName;
}

void Contact::setnickName(std::string nickName) {
	this->nickName = nickName;
}
std::string Contact::getphoneNumber() const {
	return phoneNumber;
}

void Contact::setphoneNumber(std::string phoneNumber) {
	this->phoneNumber = phoneNumber;
}
std::string Contact::getdarkestSecret() const {
	return darkestSecret;
}

void Contact::setdarkestSecret(std::string darkestSecret) {
	this->darkestSecret = darkestSecret;
}