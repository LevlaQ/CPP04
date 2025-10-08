/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:23:11 by gyildiz           #+#    #+#             */
/*   Updated: 2025/10/08 15:59:19 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal: Default constructor called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	std::cout << "WrongAnimal: Copy constructor called" << std::endl;
	*this = copy;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal& assign)
{
	if (this != &assign)
		this->type = assign.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: Destructor called" << std::endl;
}

const std::string &WrongAnimal::getType(void) const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "(WRONG)SOUND: Indistinguishable human noises" << std::endl;
}