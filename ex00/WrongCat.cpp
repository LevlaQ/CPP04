/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:31:16 by gyildiz           #+#    #+#             */
/*   Updated: 2025/10/08 15:59:50 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat: Default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& copy)
{
	std::cout << "WrongCat: Copy constructor called" << std::endl;
	this->type = "WrongCat";
	*this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat& assign)
{
	if(this != &assign)
		this->type = assign.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: Destructor called" << std::endl;
	this->type = "WrongCat";
}

const	std::string	&WrongCat::getType(void) const
{
	return (this->type);
}

void	WrongCat::makeSound() const
{
	std::cout << "SOUND: MEEEOOOOOOOOOOOW" << std::endl;
}