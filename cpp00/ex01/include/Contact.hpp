#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
class Contact
{
private:
	std::string name;
	std::string surName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;
public:
	Contact(std::string name,std::string surName,std::string nickName,std::string phoneNumber,std::string darkestSecret);
	std::string getName() const;
	std::string getsurName() const;
	std::string getnickName() const;
	std::string getphoneNumber() const;
	std::string getdarkestSecret() const;
	void setName(std::string name);
	void setsurName(std::string surName);
	void setnickName(std::string nickName);
	void setphoneNumber(std::string phoneNumber);
	void setdarkestSecret(std::string darkestSecret);
};


#endif