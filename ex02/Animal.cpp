/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 20:00:32 by gyildiz           #+#    #+#             */
/*   Updated: 2026/02/15 17:59:40 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal: Default constructor called" << std::endl;
	this->type = "Animal";
}

Animal::Animal(const Animal& copy)
{
	std::cout << "Animal: Copy constructor called" << std::endl;
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
	std::cout << "Animal: Destructor called" << std::endl;
}

const std::string &Animal::getType(void) const
{
	return (this->type);
}
