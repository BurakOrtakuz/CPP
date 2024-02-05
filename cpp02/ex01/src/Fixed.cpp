#include "../include/Fixed.hpp"
#include <iostream>
Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed &source)
{
	std::cout<< "Copy constructor called" << std::endl;
	*this = source;
}

Fixed& Fixed::operator=(const Fixed &source) 
{
	std::cout << "Copy assignation operator called" << std::endl;
	if (this != &source) {
		this->value = source.getRawBits();
	}
	return *this;
}
Fixed::~Fixed() 
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const 
{
	std::cout << "getRawBits member function called" << std::endl;
	return value;
}
void Fixed::setRawBits(int const raw) 
{
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}