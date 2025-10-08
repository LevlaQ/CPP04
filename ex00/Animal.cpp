/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 20:00:32 by gyildiz           #+#    #+#             */
/*   Updated: 2025/10/08 13:15:30 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
}

Animal::Animal(const Animal& copy)
{
	*this = copy;
}
Animal &Animal::operator=(const Animal& assign)
{
	if (this != &assign)
		this->type = assign.type;
	return (*this);
}

Animal::~Animal()
{
}

const std::string &Animal::getType(void) const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "SOUND: Indistinguishable human noises" << std::endl;
}