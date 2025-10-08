/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:23:11 by gyildiz           #+#    #+#             */
/*   Updated: 2025/10/08 14:24:31 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
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
}

const std::string &WrongAnimal::getType(void) const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "(WRONG)SOUND: Indistinguishable human noises" << std::endl;
}