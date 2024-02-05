#include <iostream>

int main(void)
{
	std::string a = "HI THIS IS BRAIN";
	std::string *stringPTR = &a;
	std::string &stringREF = a;
	std::cout<<"Address in memory of the string: "<<&a<<std::endl;
	std::cout<<"Address in memory of the stringPTR: "<<&stringPTR<<std::endl;
	std::cout<<"Address in memory of the stringREF: "<<&stringREF<<std::endl;
	std::cout<<std::endl;
	std::cout<<"Value of the string: "<<a<<std::endl;
	std::cout<<"Value of the stringPTR: "<<*stringPTR<<std::endl;
	std::cout<<"Value of the stringREF: "<<stringREF<<std::endl;
	return 0;
}